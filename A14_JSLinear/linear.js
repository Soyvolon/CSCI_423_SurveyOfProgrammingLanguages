window.Linear = (() => {
    return {
        promptLinear() {
            var a = parseFloat(prompt("Input value of a in ax+b=0:"));
            var b = parseFloat(prompt("Input value of b in ax+b=0:"));

            var res = 0;
            res -= b;
            res /= a;

            var p = document.createElement('code');
            var txt = document.createTextNode(`${a}x + ${b} = 0 | x = ${res}`);
            p.appendChild(txt);
            document.body.appendChild(document.createElement('br'));
            document.body.appendChild(p);
        }
    };
})();