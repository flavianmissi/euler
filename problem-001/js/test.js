describe("multiple finder", function () {
    it("should return true when testing if 6 is multiple of 3", function() {
        expect(isMultiple(6, 3)).toBeTruthy();
    });

    it("should return false when testing if 5 is multiple of 3", function() {
        expect(isMultiple(5, 3)).toBeFalsy();
    });

    it("should return true when testing if 15 is multiple of 3", function() {
        expect(isMultiple(15, 3)).toBeTruthy();
    });
});

describe("finder", function () {
    it("should return true when testing if 6 is multiple of 3", function() {
        expect(isMultiple(6, 3)).toBeTruthy();
    });

    it("should return false when testing if 5 is multiple of 3", function() {
        expect(isMultiple(5, 3)).toBeFalsy();
    });

    it("should return true when testing if 15 is multiple of 3", function() {
        expect(isMultiple(15, 3)).toBeTruthy();
    });
});

describe("find multiples for two numbers", function () {
    it("should return 3, 5, 6 and 9 when asked multiples for 3 or 5", function() {
        expected_multiples = [3, 5, 6, 9];
        expect(findMultiples(3, 5, 10)).toEqual(expected_multiples);
    });

    it("should return 2, 4, 6, and 8 when asked multiples for 2 or 4", function() {
        expected_multiples = [2, 4, 5, 6, 8];
        expect(findMultiples(2, 5, 10)).toEqual(expected_multiples);
    });
});

describe("sum list", function() {
    it("should return 10 given [2, 4, 3, 1]", function() {
        expect(sum([2, 4, 3, 1])).toEqual(10);
    });

    it("should return 2 given [2]", function() {
        expect(sum([2])).toEqual(2);
    });
});

describe("sum multiples", function() {
    it("should return 23 when asked the sum of all multiples of 3 or 5 below 10", function() {
        expect(sumMultiples(3, 5, 10)).toEqual(23);
    });

    it("should return 233168 when asked the sum of all multiples of 3 or 5 below 1000", function() {
        expect(sumMultiples(3, 5, 1000)).toEqual(233168);
    });
});
