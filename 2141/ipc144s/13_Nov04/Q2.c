
int oper(double* resPtr, double leftOperand, double rightOperand, char operator){
   int res = 1;

   switch (operator){
   case '+':
      *resPtr = leftOperand + rightOperand;
      break;
   case '-':
      *resPtr = leftOperand - rightOperand;
      break;
   case 'x':
      *resPtr = leftOperand * rightOperand;
      break;
   case '/':
      *resPtr = leftOperand / rightOperand;
      break;
   default:
      res = 0;
   }
   return res;
}
