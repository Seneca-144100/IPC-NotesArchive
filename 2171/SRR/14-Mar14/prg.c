struct PhoneNumber {
   int parts[3];
};

void decompose(long long phNo, struct PhoneNumber* p) {
   p->parts[0] = phNo / 10000000;
   p->parts[1] = (phNo / 10000) % 1000;
   p->parts[2] = phNo % 10000;
}
void decomposeAll(struct PhoneNumber numStrct[], long long phNums[], int size) {
   int i;
   for (i = 0; i < size; i++) {
      decompose(phNums[i], &numStrct[i]);
   }

}
int main() {
   long long phnums[3];
   struct PhoneNumber numStrct[3];
   decomposeAll(numStrct, phnums, 3);
   return 0;
}