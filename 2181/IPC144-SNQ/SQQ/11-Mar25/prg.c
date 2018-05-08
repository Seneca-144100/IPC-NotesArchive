void scanMarks(int nums[], int size) {
  int i;
  for (i = 0; i < size; i++) {
    printf("> ");
    scanf("%d", &nums[i]);
    //OR for printMarks();
    printf("%d, ", nums[i]);

  }
}


void setZero(struct Product* p) {
  p->sku = 0;
  p->price = 0.0;
}