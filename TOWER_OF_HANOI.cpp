 TOWER OF HANOI
  
  
**CODE USING THE FAVOURITE IBH METHOD**
  
  long long toh(int N, int from, int to, int aux) {
      // BASE CONDITION I.E when it has only 1 plate.
      if(N==1)
       {
           cout<<"move disk"<<" "<<N<<" from rod "<<from<<" to rod " <<to; cout<<endl;//1 plate
         return 1;
       }
       //Hypotheis i.e Into smaller 
        toh(N-1,from,aux,to); //source to helper
        
        //Now comes the induction
       cout<<"move disk"<<" "<<N<<" from rod "<<from<<" to rod " <<to; cout<<endl;//1 plate
       
        toh(N-1,aux,to,from);
        return pow(2,N)-1; 
    }
    
    
    
