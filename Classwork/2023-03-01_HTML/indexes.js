window.Indexes = (() => {
    return {
        promptSingle() {
            var str = prompt("Type a string:")
            var index = prompt(`Input an index between 0 and ${str.length - 1}:`);

            var row = this.getElement('single-index-res');
            var res = this.addTextElementTo(row);
            var txt = res.node;

            txt.appendData(`The selected char is: ${str[index]}`);
        },

        promptDouble() {
            var str = prompt("Type a string:").split('');
            var index = prompt(`Input an index between 0 and ${str.length - 1}:`);
            var index2 = prompt(`Input an index between 0 and ${str.length - 1}:`);

            var row = this.getElement('double-index-res');
            var res = this.addTextElementTo(row);
            var txt = res.node;

            [str[index], str[index2]] = [str[index2], str[index]];

            txt.appendData(`The new string is: ${str.join('')}`);

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
        }
    };
})();