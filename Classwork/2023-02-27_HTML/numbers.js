window.Numbers = (() => {
    return {
        promptTwo() {
            var num1 = parseFloat(prompt("Insert number 1:"));
            var num2 = parseFloat(prompt("Insert number 2:"));

            var p = document.createElement('p');
            
            var txt = document.createTextNode(`Numbers: ${num1} and ${num2}`);
            p.appendChild(txt);
            p.appendChild(document.createElement('br'));
            
            txt = document.createTextNode(``);
            this.appendLargest(num1, num2, txt);
            p.appendChild(txt);
            p.appendChild(document.createElement('br'));

            txt = document.createTextNode(``);
            this.appendMath(num1, num2, txt);
            p.appendChild(txt);

            document.body.appendChild(p);
        },

        appendLargest(num1, num2, txt) {
            var largeNum = num1;
            if (num2 > num1) {
                largeNum = num2;
            } else if (num2 == num1) {
                largeNum = null;
            }

            if (largeNum != null) {
                txt.appendData(`The larger number is ${largeNum}`);
            } else {
                txt.appendData("The numbers are the same sze.");
            }
        },

        appendMath(num1, num2, txt) {
            // sum, diff, prod, quo
            var sum = num1 + num2;
            var diff = num1 - num2;
            var prod = num1 * num2;
            var quo = num1 / num2;

            txt.appendData(`Sum: ${sum} | `);
            txt.appendData(`Diff: ${diff} | `);
            txt.appendData(`Prod: ${prod} | `);
            txt.appendData(`Quo: ${quo}`);
        }
    };
})();