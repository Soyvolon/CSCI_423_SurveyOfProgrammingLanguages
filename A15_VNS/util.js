window.Util = (() => {
    return {
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
    }
})();