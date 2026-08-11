#include <bits/stdc++.h>
using namespace std;

//finds all primes less than n
//initially assume all are prime
//from 2 (lowest prime) start removing multiples of primes
//here p goes from 2 to sqrt(n) [trivial]
//iterate through boolean array to see what numbers are left, add to resedue array
//this res array is the array containing all primes <=n

//TIME:  O(n * log(log(n)))
//SPACE: O(n)

vector<int> sieve(int n) {

    vector<bool> prime(n+1,true);
    prime[0]=false;
    prime[1]=false;

    for(int p=2; p*p <=n ; p++) {

        if(prime[p]) {
            for(int i=p*p; i<=n; i+=p) {
                prime[i]=false;
            }
        }
    }

    vector<int> res;

    for(int i=0;i<=n;i++) {
        if(prime[i]) {
            res.push_back(i);
        }
    }

    return res;
}
