struct Employee {
   char name[41];
   int id;
   double salary;
};

int readEmp(struct Employee* eptr, FILE* fptr) {
   return fscanf(fptr, "%[^,],%d,%lf", eptr->name, &eptr->id, &eptr->salary) == 3;
}


void printEmployee(const struct Employee* eptr) {
   // print the employee as follows:
   // name in 40 spaces, ID in 10 spaces left justified, Salary in 12 spaces with 2 digits after the decimal point
   pritnf("%40s,%-10d,%12.2lf\n", eptr->name, eptr->id, eptr->salary);
}


int main() {
//   Create an array of 500 Employees
   struct Employee e[500];
// open emp.txt for reading
   FILE* fptr = fopen("emp.txt", "r");
// read all of them from the file up to 500 records using readEmp function
   int i, j;
   int res;
   for (i = 0; i < 500 && readEmp(&e[i], fptr); i++);
   do {
      res = readEmp(&e[i], fptr);
   } while (++i < 500 & res == 1);

// print all of them using printEmployee fucntion
   for (j = 0; j < i; j++) {
      printEmployee(e[j]);
   }
   fclose(fptr);
   return 0;
}