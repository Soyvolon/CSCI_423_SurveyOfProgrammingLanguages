window.Numbers = (() =>
{
    return {
        displaySquareCubeTable() {
            var output = "Val | Sqr | Cube";

            for (var i = 5; i <= 15; i++) {
                output += `${i} | ${i ** 2} | ${i ** 3}`;

                if (i != 15) {
                    output += "\n";
                }
            }

            alert(output);
        },

        writeFibonacci() {
            var fib = [1, 1];
            for (var i = 2; i <= 20; i++) {
                fib.push(fib[i - 2] + fib[i - 1]);
            }

            var output = "";
            for (var i = 0; i < fib.length; i++) {
                if (i < fib.length - 1) {
                    output += `${fib[i]}, `;
                } else {
                    output += fib[i];
                }
            }

            document.write(output);
        }
    }
})();