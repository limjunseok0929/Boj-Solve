const N = (require('fs').readFileSync(0)+'').trim().split`
`.map(Number)
let cnt
const PrimeNumber = (n) => {
    if(n <= 1) return false
    if(n == 2) return true
    for(let i = 2; i <= Math.sqrt(n); i++){
        if(n % i == 0) return false
    }
    return true
}
for(let i of N){
    cnt = 0
    if(N == 0) break;
    for(let j = i + 1; j <= i * 2; j++){
        if(PrimeNumber(j)){
            cnt ++
        }
    }
    console.log(cnt)
}