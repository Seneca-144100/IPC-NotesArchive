int oper(double* resPtr, double leftOperand, double rightOperand, char operator){
   int res = 1;
   switch (operator){
   case '+':
      *resPtr = leftOperand + rightOperand;
      break;
   case '-':
      break;
   case 'x':
      break;
   case '/':
      break;
   default:
      res = 0;
      break;
   }
   return res;
}

