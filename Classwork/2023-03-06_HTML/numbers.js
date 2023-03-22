window.Numbers = (() => {
    return {
        getRandom(min, max) {
            return Math.floor(Math.random() * (max - min)) + min;
        },

        getElement(id) {
            var elem = document.getElementById(id);
            return elem;
        },

        addTextElementTo(elem) {
            var txt = document.createElement('p');
            elem.appendChild(txt);
            var node = document.createTextNode(``);
            txt.appendChild(node);
            return {
                node, 
                txt
            };
        },

        addSpacerTo(elem) {
            var spacer = document.createElement('br');
            return elem.appendChild(spacer);
        },

        addOddsArray() {
            // Write JavaScript program that will create an array of 10 
            // random integers between 0 and 10 (inclusive) and then remove 
            // all the even numbers from that array. Display the array before after the removal.

            var data = [];
            for (var i = 0; i < 10; i++) {
                data.push(this.getRandom(0, 11));
            }

            var row = this.getElement('array-odds');
            var res = this.addTextElementTo(row);
            var txt = res.node;

            txt.appendData(`Array: ${data}`);

            data = data.filter(e => e % 2 == 1);

            txt = this.addTextElementTo(row).node;

            txt.appendData(`Odds Array: ${data}`);
        },

        addArrayValueCounts() {
            var data = [];
            for (var i = 0; i < 10; i++) {
                data.push(this.getRandom(-5, 6));
            }

            var row = this.getElement('even-odd-zero');
            var res = this.addTextElementTo(row);
            var txt = res.node;

            txt.appendData(`Array: ${data}`);

            var even = 0;
            var odd = 0;
            var zero = 0;
            data.forEach(e => {
                if (e == 0) {
                    zero += 1;
                } else {
                    if (e % 2 == 0) {
                        even += 1;
                    } else {
                        odd += 1;
                    }
                }
            });

            txt = this.addTextElementTo(row).node;
            txt.appendData(`Even: ${even} | Odd: ${odd} | Zero: ${zero}`);
        }
    };
})();