bool isValid(char* s) {
    //if(s == "(]") return false;
    //if(s =="()","{}","[]"){
   // if(s =='(',')','{','}','[',']'){
      //  return true;
    //}    
    //else if(s=="[]"){
    // return true;
    //}else if(s =="{}"){
      //  return true;
    //}
 //if(s[0]=='(' && s[1]==')') return true;
   // if(s[0]=='[' && s[1]==']') return true;
   // if(s[0]=='{' && s[1]=='}') return true;

    //if(s[0]=='(' && s[1]=='[' && s[2]==']' && s[3]==')') return true;
    //if(s[0]=='[' && s[1]=='(' && s[2]==')' && s[3]==']') return true;
    //if(s[0]=='{' && s[1]=='[' && s[2]==']' && s[3]=='}') return true;

    //return false;
  
    char a[10000];
    int n = 0;

    for(int i = 0; s[i] != '\0'; i++) {

        if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
            a[n] = s[i];
            n++;
        }
        else {
            if(n == 0)
                return false;

            if(s[i] == ')' && a[n-1] != '(')
                return false;

            if(s[i] == ']' && a[n-1] != '[')
                return false;

            if(s[i] == '}' && a[n-1] != '{')
                return false;

            n--;
        }
    }

    return n == 0;

    
}