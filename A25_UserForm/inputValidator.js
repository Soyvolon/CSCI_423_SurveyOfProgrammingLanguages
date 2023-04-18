let prevInitial = "";
function ValidateMiddleInitial(elem) {
    let val = elem.value;
    if (val.length > 1) {
        alert("The middle initial must be a single letter.");
        elem.value = prevInitial;
    } else {
        prevInitial = val;
    }
}

let prevAge = 18;
function ValidateAge(elem) {
    let val = elem.value;
    if (val <= 17) {
        alert("Age must be above 17.");
        elem.value = prevAge;
    } else {
        prevAge = val;
    }
}

let prevWeight = 80;
function ValidateWeight(elem) {
    let val = elem.value;
    if (val < 80 || val > 300) {
        alert("Weight must be between 80 and 300.");
        elem.value = prevWeight;
    } else {
        prevWeight = val;
    }
}