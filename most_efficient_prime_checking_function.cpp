int isPrime(int N){
        // code here
        if(N==1)
        return 0;
        if(N==2||N==3)
        return 1;
        if(N%2==0||N%3==0)
        return 0;
        for(int i=1;i<=(sqrt(N)+1)/6;i++){
            if(N%(6*i+1)==0||N%(6*i-1)==0)
            return 0;
        }
        return 1;
    }