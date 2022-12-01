const input = (require('fs').readFileSync(0)+'').trim()
let croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']
const f = (s) => {
    for (let alphabet of croatia) {
      s = s.split(alphabet).join('Q');
    }
    return s.length;
}
console.log(f(input))