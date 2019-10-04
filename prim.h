/*
MIT License
Copyright (c) 2019 Sharkbyteprojects
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
int prim(){
    int  i,n,p,count,flag;
    int last;
    int buffer[9000];
    n=(9000);
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
