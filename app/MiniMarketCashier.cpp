// THIS PROJECT MUST BE COMPILED BY C++ 11

#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>
#include <unistd.h>

#define SHOP_NAME "SidisMart"

using namespace std;

// MENU CLASSES
// class menus to create objects
class Menus {
	public:
		string name = "";
		float price = 0;
		string type = "";
		
	Menus(string name, float price, string type) {
		this->name = name;
		this->price = price;
		this->type = type;
	}
};
// class selected menus to create objects
class SelectedMenus {
	public:
	string name = "";
	int quantity = 0;
	float price = 0;
	
	SelectedMenus(string name, int quantity, float price) {
		this->name = name;
		this->quantity = quantity;
		this->price = price;
	}
};

// GLOBAL VARIABLES
// Menu variables for menu lists
vector < Menus > menus {
	// MENUS FOOD
	Menus("Simba Cereal Choco Chips Cokelat 55G \t\t\t\t", 7200, "makanan_menu"),
	Menus("Energen Cereal & Susu Instant 10X29g \t\t\t\t", 13800, "makanan_menu"),
	Menus("Tresno Joyo Madu Tj Murni 150G \t\t\t\t\t", 20800, "makanan_menu"),
	Menus("Nutella Jam Spread Hazelnut With Cocoa 350G \t\t\t", 69000, "makanan_menu"),
	Menus("Quaker Oatcooking Oatmeal (Reff) Biru 200G \t\t\t\t", 12900, "makanan_menu"),
	Menus("Soyjoy Fruit Soy Bar Coklat Almond 30G (Reff) Biru 200G \t\t", 9300, "makanan_menu"),
	Menus("Pronas Corned Beef 198G \t\t\t\t\t\t", 23800, "makanan_menu"),
	Menus("Pronas Luncheon Ayam 198G \t\t\t\t\t\t", 18800 , "makanan_menu"),
	Menus("Abc Sardines Tomat 425G \t\t\t\t\t\t", 22600 , "makanan_menu"),
	Menus("Abc Sardines Chili 155G \t\t\t\t\t\t", 9600 , "makanan_menu"),
	Menus("Gulaku Gula Tebu (Putih) Premium 5Kg \t\t\t\t", 62300 , "makanan_menu"),
	Menus("Segitiga Biru Tepung Terigu 1000G \t\t\t\t\t", 10200 , "makanan_menu"),
	Menus("Bimoli Minyak Goreng Special Refill 2L \t\t\t\t", 24200 , "makanan_menu"),
	Menus("Blue Band Margarine Serbaguna 250G \t\t\t\t", 14400 , "makanan_menu"),
	Menus("Kraft Cheese Quick Melt 165G \t\t\t\t\t", 24600 , "makanan_menu"),
	Menus("Miracle Sidis Garam 500G \t\t\t\t\t\t", 4000 , "makanan_menu"),
	Menus("Miracle Sidis Bawang Goreng 60G \t\t\t\t\t", 23200 , "makanan_menu"),
	Menus("Miracle Sidis Bumbu Special Nasing Goreng 20G \t\t\t", 2200 , "makanan_menu"),
	Menus("Miracle Sidis Bumbu Semua Sayur 30G/Sayur \t\t\t\t", 25200, "makanan_menu"),
	Menus("Sasa Bumbu Serbaguna Ayam 250G \t\t\t\t\t", 8500 , "makanan_menu"),
	Menus("Royko Bumbu Serbaguna Ayam 230G \t\t\t\t\t", 7800 , "makanan_menu"),
	Menus("Royko Bumbu Serbaguna Ayam 230G \t\t\t\t\t", 7800 , "makanan_menu"),
	Menus("Kobe Bon Cabe Sambal Tabur Refill Original Level 30 35G \t\t", 7500, "makanan_menu"),
	Menus("Silver Queen Chocolate Chunky Bar Almond 95G \t\t\t", 23400 , "makanan_menu"),
	Menus("Beng-Beng Wafer Chocolate 20G \t\t\t\t\t", 2000 , "makanan_menu"),
	Menus("Lotte Choco Pie Marsmallow 6'S 168G \t\t\t\t", 16800 , "makanan_menu"),
	Menus("Kinder Joy Chocolate Crispy Boys 20G \t\t\t\t", 10200 , "makanan_menu"),
	Menus("Kopiko Sugar Free Coffee Candy \t\t\t\t\t", 500 , "makanan_menu"),
	Menus("Yupi Candy Gummy Sweet Artifact \t\t\t\t\t", 500 , "makanan_menu"),
	Menus("Yupi Candy Gummy Kiss Strawberry \t\t\t\t\t", 500 , "makanan_menu"),
	Menus("Yupi Candy Gummy Lunch \t\t\t\t\t\t", 500 , "makanan_menu"),
	Menus("Indomie Mi Instan Ayam Bawang 69G \t\t\t\t\t", 2500 , "makanan_menu"),
	Menus("Indomie Mi Instan Goreng Plus Special 85G \t\t\t\t", 2500 , "makanan_menu"),
	Menus("Pop Mie Instan Ayam 75G \t\t\t\t\t\t", 4500 , "makanan_menu"),
	Menus("Sarimi Mi Instan Goreng (Isi 2) Ayam Kecap 126G \t\t\t", 3500 , "makanan_menu"),
	Menus("Lemonilo Mie Instant Alami Goreng 77G \t\t\t\t", 7000 , "makanan_menu"),
	Menus("Lemonilo Mie Instant Alami Kuah 72G \t\t\t\t", 6700 , "makanan_menu"),
	Menus("Samyang Mie Instant Goreng Pedas Ayam 140G \t\t\t", 18700 , "makanan_menu"),
	Menus("La Fonte Fettuccine 225G \t\t\t\t\t\t", 8700 , "makanan_menu"),
	Menus("Super Bubur Instant Bergizi Ayam 45G \t\t\t\t", 3000 , "makanan_menu"),
	Menus("Ratu Abon Sapi 100G \t\t\t\t\t\t", 18300 , "makanan_menu"),
	Menus("Roma Crackers Malkist Keju Manis 115G \t\t\t\t", 8300 , "makanan_menu"),
	Menus("Gery Crackers Malkist Saluut Keju 110G \t\t\t\t", 7300 , "makanan_menu"),
	Menus("Biskuat Biscuit Wonderfull 84G \t\t\t\t\t", 6100 , "makanan_menu"),
	Menus("Arnott's Biscuit Nyam Nyam Fantasy Stick Choco Berry 25G \t\t", 3000 , "makanan_menu"),
	Menus("Glico Biscuit Pocky Double Choco 47G \t\t\t\t", 7500 , "makanan_menu"),
	Menus("Kraft Sandwich Mini Oreo Mocha 61.3G \t\t\t\t", 6500 , "makanan_menu"),
	Menus("Roma Biscuit Kelapa 300G \t\t\t\t\t\t", 9500 , "makanan_menu"),
	Menus("Roma Biscuit Susu + Selai Slai O'lai Blueberry 240G \t\t", 10500 , "makanan_menu"),
	Menus("Oreo Soft Cake Single 16G \t\t\t\t\t\t", 2000 , "makanan_menu"),
	Menus("Rebo Kuaci Milk 150G \t\t\t\t\t\t", 16000 , "makanan_menu"),
	Menus("Rebo Kuaci Milk 150G \t\t\t\t\t\t", 16000 , "makanan_menu"),
	Menus("Dua Kelinci Kacang Sukro Oven Bawang 100G \t\t\t\t", 9600 , "makanan_menu"),
	Menus("Garuda Kacang Telur 100G \t\t\t\t\t\t", 6800 , "makanan_menu"),
	Menus("Kraft Sandwich Oreo Vanila Creme 137G \t\t\t\t", 8200 , "makanan_menu"),
	Menus("Kraft Sandwich Oreo Vanila Creme 137G \t\t\t\t", 8200 , "makanan_menu"),
	Menus("Kraft Sandwich Mini Oreo Chocolate Cream 67G \t\t\t", 8000 , "makanan_menu"),
	Menus("Kraft Keju Cake 16G \t\t\t\t\t\t", 2200 , "makanan_menu"),
	Menus("Astor Wafer Stick Chocolate 40G \t\t\t\t\t", 6200 , "makanan_menu"),
	Menus("Delfi Wafer Stick Twister Minis Black Vanilla 80G \t\t\t", 7200 , "makanan_menu"),
	Menus("Nabati Richeese Wafer Krim Keju 132G \t\t\t\t", 7200 , "makanan_menu"),
	Menus("Japota Potato Chips Happy Honey Butter 68G \t\t\t", 10200 , "makanan_menu"),
	Menus("Mr.Hottest Snack Tortilla Chips Maitos Sambal Balado 140G \t\t", 9200 , "makanan_menu"),
	Menus("Tao Kae Noi Crispy Seaweed Big Sheet Classic 3.2G \t\t\t", 4200 , "makanan_menu"),
	Menus("Taro Snack Net Potato Barbeque 70G \t\t\t\t", 6200 , "makanan_menu"),
	Menus("Chitato Snack Potato Chips Sapi Panggang 120G \t\t\t", 14600 , "makanan_menu"),	
	
	// DRINK MENUS
	Menus("Aqua Air Mineral 1500Ml \t\t\t\t\t\t", 6500, "minuman_menu"),
	Menus("Aqua Air Mineral 600Ml \t\t\t\t\t\t", 3500, "minuman_menu"),
	Menus("Ultra Susu Uht Steril Slim Plain 250Ml \t\t\t\t", 5200, "minuman_menu"),
	Menus("Ultra Susu Uht Steril Slim Strawberry 250Ml \t\t\t", 5200, "minuman_menu"),
	Menus("Ultra Susu Uht Steril Slim Chocolate 250Ml \t\t\t\t", 5200, "minuman_menu"),
	Menus("Milo Healthy Drink High-Calcium Actigen-E 240Ml \t\t\t", 9200, "minuman_menu"),
	Menus("Bear Brand Susu Encer Gold Malt Putih 140Ml \t\t\t", 10500, "minuman_menu"),
	Menus("Bear Brand Susu Encer Steril 189Ml \t\t\t\t\t", 9500, "minuman_menu"),
	Menus("Greenfields Uht Milk Low Fat 1000Ml \t\t\t\t", 21500, "minuman_menu"),
	Menus("Ultra Susu Cair Uht Steril Plain 1000Ml \t\t\t\t", 19500, "minuman_menu"),
	Menus("Zee Susu Bubuk Instant Swizz Chocolate 350G \t\t\t", 34500, "minuman_menu"),
	Menus("Zee Susu Bubuk Instant Swizz Chocolate 10X40g \t\t\t", 23900, "minuman_menu"),
	Menus("Anlene Actifit 3x Hi-Calcium Original 600g \t\t\t", 52100, "minuman_menu"),
	Menus("Anlene Actifit 3x Hi-Calcium Original 250g \t\t\t", 24100, "minuman_menu"),
	Menus("Dancow Fortigro Susu Bubuk Cokelat Box 400G \t\t\t", 39100, "minuman_menu"),
	Menus("Hilo Susu Bubuk Hi-Calcium Platinum Swiss Chocolate 420g \t\t", 88100, "minuman_menu"),
	Menus("Sgm Eksplor 5+ Pro-Gressmaxx Madu Susu Pertumbuhan (Sekolah) 900G \t", 62100, "minuman_menu"),
	Menus("Bebelac 3 Susu Pertumbuhan Fos & Gos Madu 4X800g \t\t\t", 471200, "minuman_menu"),
	Menus("Entramix Nutrisi Bubuk Coklat 185G \t\t\t\t", 54700, "minuman_menu"),
	Menus("Milo Healthy Drink Energy Actigen-E 800G \t\t\t\t", 65700, "minuman_menu"),
	Menus("Diabetasol Susu Formula Diabetes Vita Digest Coklat 180G \t\t", 42700, "minuman_menu"),
	Menus("L-Men Platinum High Protein Choco Latte 6X33.5G \t\t\t", 89200, "minuman_menu"),
	Menus("WRP Body Shape Susu High Calcium Chococcino 6X26g \t\t\t", 81200, "minuman_menu"),
	Menus("Anmum Susu Bubuk Ibu Hamil Materna Strawberry Chocolate 400G \t", 62200, "minuman_menu"),
	Menus("Anmum Susu Bubuk Ibu Hamil Materna Strawberry Chocolate 200g \t", 38900, "minuman_menu"),
	Menus("Prenagen Mommy Susu Bubuk Ibu Hamil Chocolate 400G \t\t", 72800, "minuman_menu"),
	Menus("Prenagen Mommy Susu Bubuk Ibu Hamil Chocolate 200G \t\t", 39800, "minuman_menu"),
	Menus("Morinaga Chil Mil Lanjutan PHP 2 400g \t\t\t\t", 151200, "minuman_menu"),
	Menus("Morinaga Susu Formula Bayi BMT1 Soya 300g \t\t\t\t", 92200, "minuman_menu"),
	Menus("Abc Syrup Squash Delight Orange 460Ml \t\t\t\t", 14200, "minuman_menu"),
	Menus("Abc Syrup Special Grade Melon 485Ml \t\t\t\t", 21200, "minuman_menu"),
	Menus("Marjan Syrup Cocopandan 460Ml \t\t\t\t\t", 23200, "minuman_menu"),
	Menus("Coca-Cola Soft Drink 1500Ml \t\t\t\t\t", 11200, "minuman_menu"),
	Menus("Sprite Soft Drink 1500Ml \t\t\t\t\t\t", 11400, "minuman_menu"),
	Menus("Fanta Soft Drink Strawberry 1500Ml \t\t\t\t", 11900, "minuman_menu"),
	Menus("Red Bull Gold Energy Drink Can 250Ml \t\t\t\t", 6900, "minuman_menu"),
	Menus("Bintang Radler 0.0% Blackcurrant & Lime 330Ml \t\t\t", 13200, "minuman_menu"),
	Menus("A&W Soft Drink Sarsaparila 330Ml \t\t\t\t\t", 6200, "minuman_menu"),
	Menus("Mogu-Mogu Minuman Nata De Coco Sirsak 320Ml \t\t\t", 7200, "minuman_menu"),
	Menus("Kaki Tiga Larutan Penyegar Putih 500Ml \t\t\t\t", 6200, "minuman_menu"),
	Menus("Adem Sari Ching Ku Herbal Tea 325Ml \t\t\t\t", 6700, "minuman_menu"),
	Menus("Good Mood Minuman Ekstrak Buah Blackcurrant 450Ml \t\t\t", 5100, "minuman_menu"),
	Menus("Mizone Active Minuman Isotonik Lychee Lemon 350Ml \t\t\t", 3400, "minuman_menu"),
	Menus("Pocari Sweat Minuman Isotonik 350Ml \t\t\t\t", 5900, "minuman_menu"),
	Menus("Sosro Fruit Tea Strawberry 350Ml \t\t\t\t\t", 3500, "minuman_menu"),
	Menus("Tango Drink Velluto 250Ml \t\t\t\t\t\t", 5700, "minuman_menu"),
	Menus("Tango Drink Berry Dremio Dreamy Strawberry 200Ml \t\t\t", 4500, "minuman_menu"),
	Menus("Tango Drink Creamio Banana Pudding 200Ml \t\t\t\t", 4500, "minuman_menu"),
	Menus("You C1000 Health Drink Vitamin Orange 140Ml \t\t\t", 6700, "minuman_menu"),
	Menus("Kiranti Juice Sehat Datang Bulan Orange 150Ml \t\t\t", 6200, "minuman_menu"),
	Menus("Beng-Beng Chocolate Drink 4X30g \t\t\t\t\t", 4900, "minuman_menu"),
	Menus("Chocolatos Chocolate Drink 4X28g \t\t\t\t\t", 8600, "minuman_menu"),
	Menus("Cadbury Hot Chocolate Drink 3 In 1 450G \t\t\t\t", 58600, "minuman_menu"),
	Menus("Kapal Api Krim Kafe 500g \t\t\t\t\t\t", 27000, "minuman_menu"),
	Menus("Nutriboost Strawberry 300Ml \t\t\t\t\t", 5700, "minuman_menu"),
	Menus("Nutriboost Orange 300Ml \t\t\t\t\t\t", 5700, "minuman_menu"),
	Menus("Minute Maid Juice Pulpy Orange 300Ml \t\t\t\t", 5000, "minuman_menu"),
	Menus("Buavita Juice Mango 500Ml \t\t\t\t\t\t", 14900, "minuman_menu"),
	Menus("Buavita Guava 500Ml \t\t\t\t\t\t", 14900, "minuman_menu"),
	Menus("Mogu-Mogu Minuman Nata De Coco Lychee 320Ml \t\t\t", 7200, "minuman_menu"),
	Menus("Panda Grass Jelly Drink 310Ml \t\t\t\t\t", 5200, "minuman_menu"),
	Menus("Abc Juice Kacang Hijau 250Ml \t\t\t\t\t", 4200, "minuman_menu"),
	Menus("Ultra Sari Asam Asli Slim 250Ml \t\t\t\t\t", 4800, "minuman_menu"),
	Menus("Bejo Wedang Susu Jahe Merah 5X10.5G \t\t\t\t", 9800, "minuman_menu"),
	Menus("X'tragin Minuman Bandrek Plus Jahe Merah 5X25g \t\t\t", 12000, "minuman_menu"),
	Menus("Lo Han Kuo Minuman Infusion 168G \t\t\t\t\t", 21100, "minuman_menu"),
	Menus("Sido Muncul Kuku Bima Ener-G C1000mg Anggur 6X5.5G \t\t", 7700, "minuman_menu"),
	Menus("Torabika Kopi Instant Creamy Latte 10X25g \t\t\t\t", 12100, "minuman_menu"),
	Menus("Luwak White Coffee Original 18X20g \t\t\t\t", 22100, "minuman_menu"),
	Menus("Good Day Kopi Instant 3 In 1 Chococinno 30X20G \t\t\t", 35100, "minuman_menu"),
	Menus("Good Day Kopi Instant 3 In 1 Mocacinno 30X20G \t\t\t", 35100, "minuman_menu"),
	Menus("Nescafe Kopi Instant 3In1 Coffeemix Original 10X17.5G \t\t", 13300, "minuman_menu"),
	Menus("Kapal Api Kopi Bubuk Special 65G \t\t\t\t\t", 5600, "minuman_menu"),
	Menus("Tora Cafe Minuman Iced Cappuccino 180Ml \t\t\t\t", 3000, "minuman_menu"),
	Menus("Tora Cafe Minuman Iced Milky Latte 180Ml \t\t\t\t", 3000, "minuman_menu"),
	Menus("Pucuk Harum Minuman Teh Less Sugar 350Ml \t\t\t\t", 2900, "minuman_menu"),
	Menus("Pucuk Harum Minuman Teh Melati 350Ml \t\t\t\t", 2900, "minuman_menu"),
	Menus("Frestea Minuman Teh Apel 500Ml \t\t\t\t\t", 5300, "minuman_menu"),
	Menus("Ultra Teh Kotak Extra 200Ml \t\t\t\t\t", 3500, "minuman_menu"),
	Menus("Nu Minuman Green Tea Honey 330Ml \t\t\t\t\t", 4200, "minuman_menu"),
	Menus("Ichitan Thai Milk Tea Drink 310Ml \t\t\t\t\t", 7800, "minuman_menu"),
	Menus("Sosro Teh Botol Jasmine Tea 450Ml \t\t\t\t\t", 6500, "minuman_menu"),
	Menus("Max Tea Instant Drink Tarik 5X25g \t\t\t\t\t", 11000, "minuman_menu"),
	Menus("Sariwangi Teh Celup Asli 100x1.85G \t\t\t\t", 19200, "minuman_menu"),
	Menus("Poci Teh Celup Vanilla 25X2g \t\t\t\t\t", 6200, "minuman_menu"),
	Menus("Tong Tji Teh Celup 25'S Jasmine \t\t\t\t\t", 10000, "minuman_menu"),
	
	// MENUS FRESH PRODUCT
	Menus("So Good Ayam Utuh Potong 10 1Kg \t\t\t\t\t", 38500, "produksegar_menu"),
	Menus("So Good Chicken Nugget Alphabet 400G \t\t\t\t", 51500, "produksegar_menu"),
	Menus("So Good Chicken Nugget Alphabet 200G \t\t\t\t", 26700, "produksegar_menu"),
	Menus("So Good Daging Ayam Olahan Jets 400G \t\t\t\t", 51000, "produksegar_menu"),
	Menus("Cedea Nugget Kepiting 500G \t\t\t\t\t\t", 37000, "produksegar_menu"),
	Menus("Kanzler Singles Sosis Hot 65G \t\t\t\t\t", 8300, "produksegar_menu"),
	Menus("Kanzler Singles Sosis Keju 65G \t\t\t\t\t", 8300, "produksegar_menu"),
	Menus("So Good Premium Sausage Original 300G \t\t\t\t", 48300, "produksegar_menu"),
	Menus("Tora Duo Jumbo Ori Suko 500G \t\t\t\t\t", 33500, "produksegar_menu"),
	Menus("Berkah Chicken Siomay Ayam Organik 350G \t\t\t\t", 51500, "produksegar_menu"),
	Menus("Bernardi Wei Wang Siomay Seafood HRM 15'S \t\t\t\t", 29500, "produksegar_menu"),
	Menus("Cedea Tahu Baso Seafood 500G \t\t\t\t\t", 33500, "produksegar_menu"),
	Menus("Gunung Segar Strawberry \t\t\t\t\t\t", 20000, "produksegar_menu"),
	Menus("Gunung Segar Jeruk Bali \t\t\t\t\t\t", 22900, "produksegar_menu"),
	Menus("Gunung Segar Semangka Merah Oval \t\t\t\t\t", 13400, "produksegar_menu"),
	Menus("Melon Rock \t\t\t\t\t\t\t", 33400, "produksegar_menu"),
	Menus("Buah Naga Merah \t\t\t\t\t\t\t", 22400, "produksegar_menu"),
	Menus("Pepaya California \t\t\t\t\t\t\t", 11000, "produksegar_menu"),
	Menus("Jeruk Medan Super \t\t\t\t\t\t\t", 38000, "produksegar_menu"),
	Menus("Nanas Madu Subang \t\t\t\t\t\t\t", 8500, "produksegar_menu"),
	Menus("Apel Merah Red Del Usa Fresh 1Kg \t\t\t\t\t", 53500, "produksegar_menu"),
	Menus("Kurma Palm Fruit 250G \t\t\t\t\t\t", 23500, "produksegar_menu"),
	Menus("Anggur Red Globe 500G \t\t\t\t\t\t", 45000, "produksegar_menu"),
	Menus("Pear Xiang Lie 1Kg \t\t\t\t\t\t", 48000, "produksegar_menu"),
	Menus("Sun Moon Mix Fruit 113G \t\t\t\t\t\t", 9900, "produksegar_menu"),
	Menus("Sun Moon Mandarin Fruit 113G \t\t\t\t\t", 9900, "produksegar_menu"),
	Menus("Inaco Nata De Coco Crispy 1000G \t\t\t\t\t", 20600, "produksegar_menu"),
	Menus("Wong Coco Sari Kelapa Cubes Cocopandan 1000G \t\t\t", 16400, "produksegar_menu"),
	Menus("Wong Coco Pudding Mango 120G \t\t\t\t\t", 4400, "produksegar_menu"),
	Menus("Cimory Yoghurt Drink Low Fat Banana 250Ml \t\t\t\t", 9000, "produksegar_menu"),
	Menus("Cimory Yoghurt Drink Low Fat Strawberry & Mango 250Ml \t\t", 9000, "produksegar_menu"),
	Menus("Cimory Yoghurt Squeeze Original 120G \t\t\t\t", 10000, "produksegar_menu"),
	Menus("Cimory Yoghurt Squeeze Blueberry 120G \t\t\t\t", 10000, "produksegar_menu"),
	Menus("Yakult Minuman Fermentasi 5X65ml \t\t\t\t\t", 9000, "produksegar_menu"),
	Menus("Pro Chiz Keju Slice 10'S 170G \t\t\t\t\t", 13300, "produksegar_menu"),
	Menus("Telur Ayam Kampung Omega 3 (10 Butir) \t\t\t\t", 29900, "produksegar_menu"),
	Menus("Hometown Fresh Milk Plain 2L \t\t\t\t\t", 59000, "produksegar_menu"),
	Menus("Diamond Fresh Milk Chocolate 946Ml \t\t\t\t", 20500, "produksegar_menu"),
	Menus("Sari Roti Roti Tawar Milky Soft \t\t\t\t\t", 13000, "produksegar_menu"),
	Menus("Sari Roti Roti Tawar Jumbo Special \t\t\t\t", 15300, "produksegar_menu"),
	Menus("Mr.Bread Roti Manis Kasur 4'S Choco Banana \t\t\t", 12300, "produksegar_menu"),
	Menus("Sari Roti Roti Manis Sisir Mentega 165G \t\t\t\t", 10300, "produksegar_menu"),
	Menus("Sari Roti Sandwich Coklat \t\t\t\t\t\t", 4300, "produksegar_menu"),
	Menus("Adaa Bakery Donut Glaze Strawberry \t\t\t\t", 5000, "produksegar_menu"),
	Menus("Adaa Bakery Donut Glaze Cokelat \t\t\t\t\t", 5000, "produksegar_menu"),
	Menus("Adaa Bakery Donut Glaze Tiramisu \t\t\t\t\t", 5000, "produksegar_menu"),
	Menus("Ikan Lamadang 950-1200G \t\t\t\t\t\t", 50000, "produksegar_menu"),
	Menus("Udang Jerbung Fresh (40-50's) Besar 500g \t\t\t\t", 48900, "produksegar_menu"),
	Menus("Kerang Hijau (60-70's) Kecil 1Kg \t\t\t\t\t", 17500, "produksegar_menu"),
	Menus("Kerang Hijau (60-70's) Kecil 1Kg \t\t\t\t\t", 17500, "produksegar_menu"),
	
	
	// MOTHER AND CHILD MENUS
	Menus("Sun Bubur Sereal Susu Beras Merah 120G \t\t\t\t", 7000, "ibuanak_menu"),
	Menus("Nestle Cerelac Homestyle Bubur Tim Ayam Wortel 100G \t\t", 14200, "ibuanak_menu"),
	Menus("Promina Bubur Tim Ayam Kampung Tomat & Wortel 100G \t\t\t", 13200, "ibuanak_menu"),
	Menus("Sun Bubur Susu (Ekonomis) Pisang 120G \t\t\t\t", 6200, "ibuanak_menu"),
	Menus("Bebelove 1 Susu Bubuk Infant Formula 800G \t\t\t\t", 132500, "ibuanak_menu"),
	Menus("Bebelove 1 Susu Bubuk Infant Formula 400G \t\t\t\t", 66000, "ibuanak_menu"),
	Menus("Bebelove 1 Susu Bubuk Infant Formula 200G \t\t\t\t", 32500, "ibuanak_menu"),
	Menus("Heinz Farley's Biscuit Apel 120G \t\t\t\t\t", 15400, "ibuanak_menu"),
	Menus("Promina Baby Biscuit Marie Susu 150G \t\t\t\t", 13800, "ibuanak_menu"),
	Menus("Promina Baby Biscuit Rusk 6+ Kacang Hijau 130g \t\t\t", 15200, "ibuanak_menu"),
	Menus("Pediasure Triplesure Madu 400G \t\t\t\t\t", 120800, "ibuanak_menu"),
	Menus("Pediasure Triplesure Vanila 200G \t\t\t\t\t", 61100, "ibuanak_menu"),
	Menus("S-26 Procal Gold Tahap 3 Vanila 400G \t\t\t\t", 121100, "ibuanak_menu"),
	Menus("Sgm Soya 1+ Eksplor Pro-Gressmaxx Vanila 700G \t\t\t", 91500, "ibuanak_menu"),
	Menus("Pure Kids Antiseptic Wipes Sanitizer Grape 20's \t\t\t", 38200, "ibuanak_menu"),
	Menus("Mamy Poko Baby Diapers Extra Soft 28'S Tipe Perekat Small \t\t", 59900, "ibuanak_menu"),
	Menus("Mamy Poko Pants Standar 40'S S \t\t\t\t\t", 52900, "ibuanak_menu"),
	Menus("Genki Moko Moko Pants 34+2'S Medium \t\t\t\t", 45900, "ibuanak_menu"),
	Menus("Mamy Poko Baby Diapers X-Tra Kering 40'S Medium \t\t\t", 47700, "ibuanak_menu"),
	Menus("Baby Happy ! Baby Diapers Pants 30'S Large \t\t\t", 44900, "ibuanak_menu"),
	Menus("Genki Moko Moko Pants 30+2'S L \t\t\t\t\t", 45900, "ibuanak_menu"),
	
	// MENUS HEALTH AND BEAUTY
	Menus("Formula Sikat Gigi Platinum Protector Nano Charcoal Soft \t\t", 14800, "kesehatankecantikan_menu"),
	Menus("Pepsodent Pasta Gigi White 245G \t\t\t\t\t", 10000, "kesehatankecantikan_menu"),
	Menus("Close Up Pasta Gigi Gel Green Ever Fresh 160G \t\t\t", 17600, "kesehatankecantikan_menu"),
	Menus("Listerine Mouthwash Antiseptic Cool Mint 100Ml \t\t\t", 10800, "kesehatankecantikan_menu"),
	Menus("Charm Pembalut Wanita Body Fit 8'S Night Wing 42Cm \t\t\t", 17900, "kesehatankecantikan_menu"),
	Menus("Charm Pembalut Wanita Safe Night 10'S Wing 29Cm \t\t\t", 7700, "kesehatankecantikan_menu"),
	Menus("Charm Pembalut Cooling Fresh 10'S Night Wing 29Cm \t\t\t", 13700, "kesehatankecantikan_menu"),
	Menus("Laurier Pembalut Wanita Relax Night 8'S With Gathers Wing 35Cm \t", 15900, "kesehatankecantikan_menu"),
	Menus("Nexcare Earloop Mask 3Ply Isi 3'S \t\t\t\t\t", 8900, "kesehatankecantikan_menu"),
	Menus("Nexcare Carbon Masker 2'S \t\t\t\t\t\t", 8900, "kesehatankecantikan_menu"),
	Menus("Sahaja Spray Higienis Sajadah & Mukena 50Ml \t\t\t", 14000, "kesehatankecantikan_menu"),
	Menus("Garnier Booster Serum Sakura White Hyaluron 30Ml \t\t\t", 71000, "kesehatankecantikan_menu"),
	Menus("Garnier Light Complete Super Uv Spf50+ Matte Finish 30Ml \t\t", 51350, "kesehatankecantikan_menu"),
	Menus("L'oreal White Perfect Day Cream 50mL \t\t\t\t", 98950, "kesehatankecantikan_menu"),
	Menus("La Tulipe BB Cushion Glow SPF 50 01 Porcelain 12g \t\t\t", 83950, "kesehatankecantikan_menu"),
	Menus("Garnier Light Complete Facial Foam Pure Lemon Essence 100Ml \t", 22950, "kesehatankecantikan_menu"),
	Menus("Clean & Clear Micellar Water With Aloe Vera Extract 100Ml \t\t", 18000, "kesehatankecantikan_menu"),
	Menus("Garnier Men Xl Charcoal Tissue Mask Power White 28G \t\t", 18900, "kesehatankecantikan_menu"),
	Menus("Glow & Lovely Multivitamin Cream 50G \t\t\t\t", 34900, "kesehatankecantikan_menu"),
	Menus("Kao Biore Body Foam Active Antibacterial 450Ml \t\t\t", 21900, "kesehatankecantikan_menu"),
	Menus("Dettol Body Wash Anti Bakteri Cool 410G \t\t\t\t", 37900, "kesehatankecantikan_menu"),
	Menus("Lifebuoy Body Wash Total 10 Pump Red 500Ml \t\t\t", 45900, "kesehatankecantikan_menu"),
	Menus("Axe Deodorant Bodyspray Black 150Ml \t\t\t\t", 33000, "kesehatankecantikan_menu"),
	Menus("Gatsby Urban Cologne Spray Infinity 125Ml \t\t\t\t", 20900, "kesehatankecantikan_menu"),
	Menus("Nivea Deo Roll On For Men Cool Kick 50Ml \t\t\t\t", 19000, "kesehatankecantikan_menu"),
	Menus("Dove Roll On Deodorant Original 40Ml \t\t\t\t", 20100, "kesehatankecantikan_menu"),
	Menus("Indomaret Hand Soap Strawberry 375Ml \t\t\t\t", 9500, "kesehatankecantikan_menu"),
	Menus("Dettol Hand Wash Anti Bakteri Original 400Ml \t\t\t", 18200, "kesehatankecantikan_menu"),
	Menus("Saniter Hand Sanitizer Gel 50Ml \t\t\t\t\t", 21200, "kesehatankecantikan_menu"),
	Menus("Lifebuoy Hand Sanitizer Skin Immunity Total 10 90Ml \t\t", 21100, "kesehatankecantikan_menu"),
	Menus("Veet Hair Removal Cream Normal Skin 25G \t\t\t\t", 19100, "kesehatankecantikan_menu"),
	Menus("Head & Shoulders Shampoo Anti Dandruff Clean & Balance 300Ml \t", 34100, "kesehatankecantikan_menu"),
	Menus("Clear Shampoo Anti Dandruff Complate Soft Care 320Ml \t\t", 29900, "kesehatankecantikan_menu"),
	Menus("Lifebuoy Shampoo Anti Dandruff 340Ml \t\t\t\t", 23900, "kesehatankecantikan_menu"),
	Menus("Dove Shampoo Hair Fall Treatment 160Ml \t\t\t\t", 27100, "kesehatankecantikan_menu"),
	Menus("Herbal Essences Conditioner Smooth Golden Moringa Oil 400mL \t", 102900, "kesehatankecantikan_menu"),
	Menus("Pantene Conditioner 3 Minute Miracle Hair Fall Control 180mL \t", 27400, "kesehatankecantikan_menu"),
	Menus("Tresemme Kondisioner Keratin Smooth New 170Ml \t\t\t", 32400, "kesehatankecantikan_menu"),
	Menus("Sunsilk Vitamin Hair Mist 3 In 1 40Ml \t\t\t\t", 13400, "kesehatankecantikan_menu"),
	Menus("Ellips Hair Vitamin Pro-Keratin Hair Repair 6X1ml \t\t\t", 11400, "kesehatankecantikan_menu"),
	Menus("Makarizo Hair Vitamin Vitacaps Cashmere Smooth 6X1mL \t\t", 14100, "kesehatankecantikan_menu"),
	Menus("Pisau Cukur Razor 3 Mata Silet \t\t\t\t\t", 8100, "kesehatankecantikan_menu"),
	Menus("Vaseline Men Face Wash Healthy White 100G \t\t\t\t", 33100, "kesehatankecantikan_menu"),
	Menus("Nivea Facial Scrub For Men Whitening Oil Control 100Ml \t\t", 32600, "kesehatankecantikan_menu"),
	Menus("Garnier Men Acno Fight Foam 6 In 1 Anti Acne 100Ml \t\t", 34300, "kesehatankecantikan_menu"),
	Menus("Nivea Cooling Foam Men Wht Oil Clear Anti Shine + Purify 100Ml \t", 34900, "kesehatankecantikan_menu"),
	Menus("Kao Biore Facial Foam Men's Bright Oil Clear 100G \t\t\t", 30200, "kesehatankecantikan_menu"),
	Menus("L'oreal Paris Studio Styling Gel Extreme Indestructible 150mL \t", 88100, "kesehatankecantikan_menu"),
	Menus("Gatsby Styling Pomade 80G \t\t\t\t\t\t", 31600, "kesehatankecantikan_menu"),
	Menus("Antangin Obat Masuk Angin Cair Ginger Mint 5X15 Ml \t\t", 12600, "kesehatankecantikan_menu"),
	Menus("Mylanta Obat Maag Liquid Mint 50Ml \t\t\t\t", 16600, "kesehatankecantikan_menu"),
	Menus("Bodrex Obat Sakit Kepala 20'S \t\t\t\t\t", 9100, "kesehatankecantikan_menu"),
	Menus("Cap Lang Minyak Telon Lang Plus Triple Action 150Ml \t\t", 35500, "kesehatankecantikan_menu"),
	Menus("Hot In Balsem Otot Extra Hot 25G \t\t\t\t\t", 7500, "kesehatankecantikan_menu"),
	Menus("Cap Lang Minyak Kayu Putih Aroma Therapy 60Ml \t\t\t", 24400, "kesehatankecantikan_menu"),
	Menus("88 Salep Kulit 6G \t\t\t\t\t\t\t", 11700, "kesehatankecantikan_menu"),
	Menus("Hansaplast Kain Elastis 10'S Mixed \t\t\t\t", 6000, "kesehatankecantikan_menu"),
	
	// MENUS HOME AND LIVING
	Menus("Nice Facial Tissue Non Perfumed 2 Ply 700G \t\t\t\t", 36500, "homeliving_menu"),
	Menus("Paseo Smart Facial Tissue 2 Ply / 250'S \t\t\t\t", 18800, "homeliving_menu"),
	Menus("Wateru Premium Bamboo Tissue 150's \t\t\t\t\t", 16400, "homeliving_menu"),
	Menus("Mitu Baby Fresh & Clean Wipes Blue Blossom Berry 2X40's \t\t", 13500, "homeliving_menu"),
	Menus("Softies Wet Tissue Antibacterial 20'S Antiseptic \t\t\t", 9900, "homeliving_menu"),
	Menus("Dettol Antiseptic Wet Wipes 10'S \t\t\t\t\t", 9100, "homeliving_menu"),
	Menus("Royale Softener Purple Dawn 800Ml \t\t\t\t\t", 15000, "homeliving_menu"),
	Menus("Kao Attack Detergent Powder Easy Purple Blossom 1.2Kg \t\t", 20900, "homeliving_menu"),
	Menus("Rinso Deterjen Liquid Molto Perfume Essence 750Ml \t\t\t",17600, "homeliving_menu"),
	Menus("So Klin Softergent Powder Purple Lavender 770G \t\t\t", 16500, "homeliving_menu"),
	Menus("Daia Detergent Bubuk Putih Extrak Pemutih 1.8Kg \t\t\t", 26900, "homeliving_menu"),
	Menus("Kao Attack Deterjen Powder Jaz 1 Pesona Segar 850G \t\t", 15000, "homeliving_menu"),
	Menus("Total Detergent Powder Almeera Sport & Active 1.8Kg \t\t", 38800, "homeliving_menu"),
	Menus("Downy Softener Mystique 680Ml \t\t\t\t\t", 19900, "homeliving_menu"),
	Menus("Downy Softener Mystique 950Ml \t\t\t\t\t", 29600, "homeliving_menu"),
	Menus("Downy Softener Sunrise Fresh 1.5L \t\t\t\t\t", 55500, "homeliving_menu"),
	Menus("So Klin Pewangi Pakaian Refill Violet 900Ml \t\t\t", 9900, "homeliving_menu"),
	Menus("So Klin Pewangi Pakaian Violet 450Ml \t\t\t\t", 4900, "homeliving_menu"),
	Menus("Vanish Penghilang Noda Cair Btl 1L \t\t\t\t", 49900, "homeliving_menu"),
	Menus("Vanish Penghilang Noda Cair 450Ml \t\t\t\t\t", 15900, "homeliving_menu"),
	Menus("Sunlight Pencuci Piring Refill Habbatussauda 780Ml \t\t", 13900 , "homeliving_menu"),
	Menus("Mama Lime Ekstrak Grean Tea Cairan Pencuci Piring 780Ml \t\t", 11900 , "homeliving_menu"),
	Menus("Ekonomi Pencuci Piring Power Liquid Jeruk Nipis 760Ml \t\t", 12900 , "homeliving_menu"),
	Menus("Sunlight Cairan Pencuci Piring Refill Jeruk Nipis 210Ml \t\t", 5000 , "homeliving_menu"),
	Menus("Sos Pembersih Lantai Sereh 700Ml \t\t\t\t\t", 9500 , "homeliving_menu"),
	Menus("Harpic Pembersih Kloset Power Plus Orange 450Ml \t\t\t", 24100 , "homeliving_menu"),
	Menus("Mr.Muscle Glass Cleaner Clear Liquid Pump Original 500Ml \t\t", 13100 , "homeliving_menu"),
	Menus("Vixal Pembersih Kamar Mandi Kuat Harum 780Ml \t\t\t", 20800 , "homeliving_menu"),
	Menus("Kiwi Paste Black 45Ml \t\t\t\t\t\t", 13100 , "homeliving_menu"),
	Menus("Force Magic Insektisida Spray Lemon 600Ml \t\t\t\t", 25900, "homeliving_menu"),
	Menus("Baygon Insektisida Spray Anti Nyamuk Cherry Blossom 600Ml \t\t", 26900, "homeliving_menu"),
	Menus("Hit Insektisida Spray Orange 600+75Ml \t\t\t\t", 31500, "homeliving_menu"),
	Menus("Hit Magic Expert Anti Nyamuk Bakar Floral Blossom 10'S \t\t", 4400, "homeliving_menu"),
	Menus("Bagus Pengharum Lemari Fancys Rose 60G \t\t\t\t", 13800, "homeliving_menu"),
	Menus("Baygon Obat Nyamuk Bakar Jumbo 5'S \t\t\t\t", 4000, "homeliving_menu"),
	Menus("Glade Automatic Spray Refill Vanila & Oud Wood 146G \t\t", 29700, "homeliving_menu"),
	Menus("Stella Air Freshener All In One Caffe Latte 42G \t\t\t", 10900, "homeliving_menu"),
	Menus("Vape Obat Nyamuk Spray 1 X Semprot Orange 10Ml \t\t\t", 25400, "homeliving_menu"),
	Menus("Soffell Lotion Anti Nyamuk Apel 80G \t\t\t\t", 12600, "homeliving_menu"),
	Menus("Soffell Lotion Anti Nyamuk Kulit Jeruk 80G \t\t\t", 12600, "homeliving_menu"),
	Menus("Kamper Toilet Para Colour Ball 5'S \t\t\t\t", 14900, "homeliving_menu"),
	Menus("Kamper Butir Putih Naphthalene 150G \t\t\t\t", 12500, "homeliving_menu"),
	Menus("SidisMart Sponge Mandi \t\t\t\t\t\t", 17500, "homeliving_menu"),
	Menus("SidisMart Sikat Baju W-20930 \t\t\t\t\t", 19900, "homeliving_menu"),
	Menus("SidisMart Alat Pel \t\t\t\t\t\t", 19900, "homeliving_menu"),
	Menus("SidisMart Sapu Ijuk \t\t\t\t\t\t", 27500, "homeliving_menu"),
	Menus("SidisMart Payung Panjang Warna Warni \t\t\t\t", 37500, "homeliving_menu"),
	Menus("Scotch Brite Sabut Spons Tidak Menggores Id-37 \t\t\t", 8100, "homeliving_menu"),
	Menus("Energizer Battery Alkaline Max 9 Volt No.522 Bp1 \t\t\t", 29925, "homeliving_menu"),
	Menus("Abc Battery Alkaline 9 Volt/6Lr61 Millennium Power \t\t", 39600, "homeliving_menu"),
	Menus("Abc Battery Biru R6 4'S \t\t\t\t\t\t", 12700, "homeliving_menu"),
	Menus("Abc Battery Alkaline Aa-Lr6/4'S Millennium Power \t\t\t", 37900, "homeliving_menu"),
};

// Variables to filter menus by type
vector < Menus > getMenusByType(string type) {
	vector < Menus > filtered_menus;
	
	for(int i = 0; i < menus.size(); i++) {
		if (menus[i].type == type) filtered_menus.push_back(menus[i]);
	}
	
	return filtered_menus;
};
// Variables for the contents of the selected menu
vector < SelectedMenus > selectedMenus;

string selected_menu = "", selected_item = "";
int selected_quantity = 0;
bool force_back = false;

// CUSTOM METHODS
// function create line
void line() {
	for ( int i = 0; i < 90; i++ )
	cout << "_"; cout << endl;
	cout << endl;
}

// function to get the total price of the selected menu
float getTotalPrice() {
	float total_price = 0;
	for (int i = 0; i < selectedMenus.size(); i++) {
		total_price += selectedMenus[i].price * selectedMenus[i].quantity;
	}
	
	return total_price;
}
// function to generate random string
string genString(const int len) {
    string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    
    srand( (unsigned) time(NULL) * getpid());

    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    
    
    return tmp_s;
    
}
// function to create receipt
void createReceipt(float total_paid, float total_price, float total_change) {
	string order_reference = genString(10);
	string file_name = "struk_" + order_reference + ".doc";
	ofstream receipt(file_name);
	
	receipt << "\t\t\t " << "=============================== " << endl;
	receipt << "\t\t\t\t\t " << SHOP_NAME << endl;
	receipt << "\t\t\t " << "=============================== " << endl;
	receipt << endl;
	receipt << "Referensi pesanan \t : " << order_reference << endl;
	receipt << "Items \t\t : " << endl;
	// LINE	
	for ( int i = 0; i < 90; i++ ) {
		receipt << "_";
	}
	receipt << endl;
	
	// LIST ORDERED
	for (int i = 0; i < selectedMenus.size(); i++) {
		receipt << "("<< (i + 1) <<") "<< selectedMenus[i].name <<"X"<< selectedMenus[i].quantity <<" \t IDR: "<< selectedMenus[i].price << endl;	
	}
	//LINE
	for ( int i = 0; i < 90; i++ ) {
		receipt << "_";
	}
	receipt << endl;
	
	receipt << "Total IDR: " << total_price << endl;
	receipt << "Price paid IDR: " << total_paid << endl;
	receipt << "Change IDR: " << total_change << endl;
	
	receipt.close();
	
	cout << endl;
	cout << "Success creating receipt" << endl;
	
	ifstream read_receipt(file_name);
	receipt.close();
}

// VIEWS
// function to display header
void headerView() {
	cout << "\t\t\t " << "============================================= " << endl;
	cout << "\t\t\t\t\t " << "  " << SHOP_NAME << endl;
	cout << "\t\t\t " << "============================================= " << endl;
}

// function to display the menu based on the selected menu
void menuView(string menu_type) {
	vector < Menus > selected_menus = getMenusByType(menu_type);
	MENU_VIEW_START:
	
	headerView();
	
	line();
	for (int i = 0; i < selected_menus.size(); i++) {
		cout << "("<< (i + 1) <<") "<< selected_menus[i].name <<" IDR "<< selected_menus[i].price << endl;	
	}
	cout << "(" << selected_menus.size() + 1 << ") Kembali ke menu utama" << endl;
	line();
	
	// SELECT ITEMS
	cout << "Pilih Barang Anda \t\t ";
//	for (int i = 0; i < selected_menus.size(); i++) {
//		cout << (i + 1);
//		cout << "/";
//	}
	cout << ": ";
	cin.sync(); getline (cin, selected_item);
	
	// HANDLE INPUT ITEMS
	stringstream stringToInteger(selected_item);
	int selected_index = 0;
	stringToInteger >> selected_index;
	
	if (selected_index == selected_menus.size() + 1) {
		force_back = true;
		goto MENU_VIEW_END;
	} else if (selected_index > selected_menus.size()){
		system("cls");
		goto MENU_VIEW_START;
	}
		
	cout << "Masukkan Jumlah \t\t : "; cin >> selected_quantity;
	
	// PROVIDE SELECTED ITEMS
	for (int i = 0; i < selected_menus.size(); i++) {
		if (selected_index == (i + 1)) {
			selectedMenus.push_back(
				SelectedMenus
					(
						selected_menus[i].name, 
						selected_quantity, 
						selected_menus[i].price
					)
			);
		}
	}
	
	MENU_VIEW_END:
	cout << endl;
}
// function to display selected cart items
void myCartView() {
	cout << "Pesanan Saya \t : " << endl;
	line();
	for (int i = 0; i < selectedMenus.size(); i++) {
		cout << "("<< (i + 1) <<") "<< selectedMenus[i].name <<"X"<< selectedMenus[i].quantity <<" \t IDR "<< selectedMenus[i].price << endl;	
	}
	line();
	cout << "Total IDR \t : " << getTotalPrice() << endl;
	cout << endl;
}

// function to display payments
void payView() {
	PAY_VIEW_START:
	float total_paid = 0, total_price = getTotalPrice(), change = 0;
	string make_receipt = "";
	headerView();
	myCartView();
	
	line();
	
	cout << "Masukkan jumlah yang harus dibayar IDR \t : "; cin >> total_paid;
	
	if (total_paid < total_price) {
		cout << endl;
		cout << "Uang Anda kurang IDR \t\t : " << total_price - total_paid << endl;
		cout << endl;
		cin.get();
		cin.get();
		system("cls");
		goto PAY_VIEW_START;
	}
	
	change = total_paid - total_price;
	
	cout << "Kembalian anda " << "IDR \t\t\t : " << change << endl;
	cout << "Buat Struk (Y/N) \t\t\t : "; cin.sync(); getline (cin, make_receipt);
	
	if (make_receipt == "Y" || make_receipt == "y") {
		createReceipt(total_paid, total_price, change);
	}
	
	// RESET CART
	selectedMenus.clear();
	
	cout << endl;
	line();
	cout << "Terima kasih telah berbelanja di " << SHOP_NAME << endl;
	cout << "Masuk untuk kembali ke menu..." << endl;
	cin.get();
	
	//	BACK TO MAIN MENU
	force_back = true;
}
// function to show that you have not paid
void notPayYet() {
	headerView();
	cout << endl;
	
	cout << "Anda belum membayar..." << endl;
	cout << "Silahkan bayar pembelian anda di menu bayar" << endl;
	cin.get();
}
// function to show that your shopping cart is empty
void emptyCartView() {
	headerView();
	cout << endl;
	
	cout << "Keranjang Anda kosong" << endl;
	cout << "Silahkan isi keranjang belanja anda terlebih dahulu" << endl;
	cin.get();
}

// function to display the pay menu
void cartView() {
	PAY_VIEW_START:
	headerView();
	myCartView();
	cout << "Pilih tindakan Anda " << endl;
	line();
	cout << "(1) Bayar " << endl;
	cout << "(2) Kembali ke menu utama " << endl;
	line();
	cout << "Pilih Barang Anda (1/2): ";
	cin.sync(); getline (cin, selected_item);
	
	if (selected_item == "1") {
		system("cls");
		payView();
	}
	else if (selected_item == "2") {
		force_back = true;
		goto PAY_VIEW_END;
	} else {
		system("cls");
		goto PAY_VIEW_START;
	}
	
	PAY_VIEW_END:
	cout << endl;
}

// main function to run first
int main() {
	string btmm = ""; // Back to main menu
	
	MAIN_START:
	
	headerView();
	
	line();
	cout << "(1) Makanan" << endl;
	cout << "(2) Minuman" << endl;
	cout << "(3) Produk Segar" << endl;
	cout << "(4) Ibu & Anak" << endl;
	cout << "(5) Kesehatan & Kecantikan" << endl;
	cout << "(6) Home & Living" << endl;
	cout << "(7) Bayar" << endl;
	cout << "(8) Keluar" << endl;
	line();
	cout << "Pilih Menu Anda (1/2/3/4/5/6/7/8): "; cin.sync(); getline(cin, selected_menu);
	
	system("cls");
	
	SELECT_MAIN_MENU_START:
	if (selected_menu == "1") menuView("makanan_menu");
	else if (selected_menu == "2") menuView("minuman_menu");
	else if (selected_menu == "3") menuView("produksegar_menu");
	else if (selected_menu == "4") menuView("ibuanak_menu");
	else if (selected_menu == "5") menuView("kesehatankecantikan_menu");
	else if (selected_menu == "6") menuView("homeliving_menu");
	else if (selected_menu == "7") {
		system("cls");
		if (selectedMenus.size()) {
			cartView();
		} else {
			emptyCartView();
		}
	}
	else if (selected_menu == "8") {
		if (selectedMenus.size()) {
			notPayYet();
			system("cls");
			goto MAIN_START;
		} else {
			goto MAIN_END;	
		}
	}
	else {
		system("cls");
		goto MAIN_START;
	}
	
	if (force_back) {
		force_back = false;
		system("cls");
		goto MAIN_START;
	}
	
	// Back to main menu
	BTMM_START:
	cout << "Kembali ke menu utama (Y/N): "; cin.sync(); getline(cin, btmm);
	
	if (btmm == "Y" || btmm == "y") {
		system("cls");
		goto MAIN_START;
	} else if (btmm == "N" || btmm == "n") {
		system("cls");
		goto SELECT_MAIN_MENU_START;
	}
	
	goto BTMM_START;
	
	MAIN_END:
	
	system("pause");
	return 0;
}
