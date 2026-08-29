
//finds the gcd of two integers a and b
//implementation of the Euclidean algorithm (basically long division)


int gcd(int a,int b) {
    if(b==0) return a;
    return (b,a%b);
}
