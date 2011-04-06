<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<html>
	<head>
		<meta http-equiv="Content-Type" content="text/html; charset=iso-8859-1">
		<title>Untitled Document</title>
	</head>
	<body>
		
		<script language=javascript>
			function kk(a,b)
			{
				this.x = a;
				this.y = b;
				//document.write(a+b);
				//document.write(this.constructor);
			}
			function f()
			{
				document.write(this.constructor);
			}
			var k = new kk(1,2);
			k.f = f;
			k.f();
		</script>
	</body>
</html>
