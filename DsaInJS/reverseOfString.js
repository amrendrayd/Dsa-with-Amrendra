function reverseOfString(str) {
    if(str === ''){
        return '';
    }
    else {
        return reverseOfString(str.substr(1)) + str.charAt(0);
    }
}

console.log(reverseOfString("amrendra"));
