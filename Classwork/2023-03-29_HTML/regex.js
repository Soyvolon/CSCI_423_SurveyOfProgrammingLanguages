window.Regex = (() => {
    return {
        checkWord(word) {
            let expr = /[A-Z]+[a-z]*/;
            return expr.test(word);
        },

        promptWords() {
            let input = prompt("Enter a word:");
            if (this.checkWord(input)) {
                alert("Word starts uppercase and the rest is lowercase.");
            } else {
                alert("Word format bad.")
            }
        },

        testWords() {
            let data = [
                {test: "Word", res: true},
                {test: "word", res: false},
                {test: "W", res: true},
                {test: "Wo", res: true},
                {test: "Word word", res: true}
            ]

            this.testRunner(data, this.checkWord);
            alert("Output printed to console.");
        },

        testRunner(testData, method) {
            console.log(`Running tests on ${method.name}`);
            testData.forEach(set => {
                let testRes = method(set.test);
                if (testRes == set.res) {
                    console.log(`Test Succeeded: {${set.test}, ${set.res}}`);
                } else {
                    console.log(`Test Failed: Test: ${set.test} | Expected: ${set.res} | Actual: ${testRes}`);
                }
            });
        }
    };
})();