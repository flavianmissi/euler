var isMultiple = function (x, y) {
    return x % y === 0;
};

var findMultiples = function(x, y, until) {
    var i = 1;
    var multiples = [];

    for(i; i < until; i++) {
        if (i % x === 0 || i % y === 0) {
            multiples.push(i);
        }
    }

    return multiples;
};

var sum = function(numbers) {
    var _sum = 0;
    var n;

    for each (n in numbers) {
        _sum += parseInt(n, 10);
    }

    return _sum;
};

var sumMultiples = function(x, y, until) {
    var multiples = findMultiples(x, y, until);
    return sum(multiples);
}
