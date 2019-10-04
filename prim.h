int prim(){
    int  i,n,p,count,flag;
    int last;
    int buffer[9000];
    n=(9000);
    printf("First %d prime numbers are \n",n) ;
    p=2;
    i=1; 
    while(i<=n)
    {
        flag=1;
        for(count=2;count<=p-1;count++)
        {
            if(p%count==0)  //Will be true if p is not prime
            {
             flag=0;
             break;      //Loop will terminate if p is not prime
            }  
        }
            if(flag==1)
            {
                buffer[i]=p;
                if(i+2==n){
                   last=p;
                }
             i++;
            }
        p++;
    }
    return last;
}
