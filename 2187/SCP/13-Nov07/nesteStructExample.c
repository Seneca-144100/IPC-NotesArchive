struct Date {
	int day;
	int mon;
	int year;
};
struct LicPlate {
	char number[9];
	struct Date renDate;
};
struct Name {
	char first[21];
	char last[41];
};
struct Car {
	struct LicPlate plate;
	struct Name owner;
	struct Date manDate;
	char make[41];
	char model[61];
};

int main(void) {
	struct Car C = { 
		{"1H3H4H5",{12,5,2018}}, // plate
	    {"Fred", "Soley"},   // owner
	    {1, 1, 2017}, // mandate
		"Cadilac",   // make
		"XT5" // model
	};
	return 0;
}