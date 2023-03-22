window.Numbers = (() =>
{
    return {
        countDown() {
            var output = "";

            for (var i = 20; i >= 0; i -= 2) {
                output += `${i}, `;
            }

            output = output.substring(0, output.lastIndexOf(','));

            var elem = window.Util.getElement('counter');
            var txt = window.Util.addTextElementTo(elem).node;
            txt.appendData(`Numbers: ${output}`);
        }
    }
})();