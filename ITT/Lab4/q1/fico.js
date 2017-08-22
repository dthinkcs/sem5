

var x =prompt("enter number:",0);
var res = 0;
var str = "";
for (var i = 0; i < x; i++) {
		res = res + i;
		str = str + res + " ";
		alert(str);
	}

var n =prompt("enter number:",0);

var res = "";
var str ="";
	for (var i = 0; i <= n; i++) {
			res = i + " : square : " + Math.pow(i,2);	
			alert(res);
			str = str + res +"\n";
		}
		alert(str);
		
	
