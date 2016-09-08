void swap(double* fptr, double* sptr){
   double temp;
   temp = *fptr;
   *fptr = *sptr;
   *sptr = temp;
}