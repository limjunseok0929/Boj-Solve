const [M, N] = (require('fs').readFileSync(0)+'').split` `.map(v => +v)
const PrimeNumber = (n) => {
    if(n <= 1)
        return false
    if(n == 2)
        return true
    for(let i = 2; i <= Math.sqrt(n); i++){
        if(n % i == 0){
            return false
        }
    }
    return true
}
for(let i = M; i <= N; i++){
    if(PrimeNumber(i)){
        console.log(i)
    }
}