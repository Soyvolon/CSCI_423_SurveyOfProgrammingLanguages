

window.Strings = (() =>
{
    return {
        promptVowels() {
            var str = prompt("Enter a string:");
            var vowels = 0;
            for (var i = 0; i < str.length; i++)
            {
                switch(str[i].toLowerCase())
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                        vowels += 1;
                        break;
                }
            }

            var elem = window.Util.getElement('vowels');
            var txt = window.Util.addTextElementTo(elem).node;
            txt.appendData(`String: ${str} - Vowels: ${vowels}`);
        },

        promptSubstring() {
            var parent = prompt("Enter a string:");
            var maybeChild = prompt("Enter another string:");

            var res = parent.includes(maybeChild);

            var elem = window.Util.getElement('substring');
            var txt = window.Util.addTextElementTo(elem).node;
            txt.appendData(`P: ${parent} | C: ${maybeChild} - Is C Substring of P: ${res}`);
        }
    }
})();