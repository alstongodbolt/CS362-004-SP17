import junit.framework.TestCase;

   public void testManualTest()
   {
	   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
	   System.out.println(urlVal.isValid("es.pn.com"));
	   System.out.println(urlVal.isValid("http://es.pn.com"));
	   System.out.println(urlVal.isValid("http://google.com"));
	   
	   
	   
   }


public class UrlValidatorTest extends TestCase {
    public void testIsValid()
   	{
      	 
   	 //https://www.themountain.com:443/search.php?search_query=unicorn&section=product
   	 //Scheme: https://
   	 //hostname: www.themountain.com
   	 //port: 443
   	 //path: /search.php
   	 //query = ?search_query=unicorn&section=product
   	 
   	 //change one thing at a time and see what breaks
   	 
   	 boolean check;
   	 boolean isUrlValid;
   	 UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
   	 

   	 //test schemes
   	 String goodSchemes[] = {"http://", "ftp://"};
   	 String badSchemes[] = {"http", "ftp", "123://", "123"};
   	 String goodHosts[] = {"123.123.123.123", "www.google.com", "google.com"};
   	 String badHosts[] = {"999.999.999.999", "1", "www.google.pfowaiejr"};
   	 String goodPorts[] = {":1", ":12", ":123", ":1234", ":12345"};
   	 String badPorts[] =  {":999999", ":99999999"};
   	 String goodPaths[] = {"/abc.php", "/cde.php", "/lksdjflksajdflkwjrlkewjr.php", "/lkdfsjalksdjfl.lfdskjflkfdsjalk", ""};
    	String badPaths[] = {"&^*$@(*$", "!@(#&%#&$"};
   	 String goodQueries[] = {"?tree=banana&tree=oranimport junit.framework.TestCase;

public class UrlValidatorTest extends TestCase {
	public void testIsValid()
	   {
	       
		//https://www.themountain.com:443/search.php?search_query=unicorn&section=product
		//Scheme: https://
		//hostname: www.themountain.com
		//port: 443
		//path: /search.php
		//query = ?search_query=unicorn&section=product
		
		//change one thing at a time and see what breaks
		
		boolean check;
		boolean isUrlValid;
		UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
		

		//test schemes
		String goodSchemes[] = {"http://", "ftp://"};
		String badSchemes[] = {"http", "ftp", "123://", "123"};
		String goodHosts[] = {"123.123.123.123", "www.google.com", "google.com"};
		String badHosts[] = {"999.999.999.999", "1", "www.google.pfowaiejr"};
		String goodPorts[] = {":1", ":12", ":123", ":1234", ":12345"};
		String badPorts[] =  {":999999", ":99999999"};
		String goodPaths[] = {"/abc.php", "/cde.php", "/lksdjflksajdflkwjrlkewjr.php", "/lkdfsjalksdjfl.lfdskjflkfdsjalk", ""};
	    String badPaths[] = {"&^*$@(*$", "!@(#&%#&$"};
		String goodQueries[] = {"?tree=banana&tree=orange&tree=maple", "?search=123&search1=345&search4=456"};
	    String badQueries[] = {"%skladfjalskej", "*&@#($(*&#($*&#$*(98jkdsghf*()!@#&\\banana??????kli(@*@#KLJ$@QLKJlkjf0ff!()#*)@*#(treetrue"};
	    
		String testString = "";
		
		
		//https://www.themountain.com:443/search.php?search_query=unicorn&section=product
		//these schemes should fail
		
		for (int i = 0; i < goodSchemes.length; i++){
			testString = goodSchemes[i] + "www.themountain.com:443/search.php";
			check = true;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < badSchemes.length; i++){
			testString = badSchemes[i] + "www.themountain.com:443/search.php";
			check = false;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < goodHosts.length; i++){
			testString = "http://" + goodHosts[i] + ":443/search.php";
			check = true;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < badHosts.length; i++){
			testString = "http://" + badHosts[i] + ":443/search.php";
			check = false;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < goodPorts.length; i++){
			testString = "http://www.themountain.com" + goodPorts[i] + "/search.php";
			check = true;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < badPorts.length; i++){
			testString = "http://www.themountain.com" + badPorts[i] + "/search.php";
			check = false;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < goodPaths.length; i++){
			testString = "http://www.themountain.com:443" + goodPaths[i];
			check = true;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < badPaths.length; i++){
			testString = "http://www.themountain.com:443" + badPaths[i];
			check = false;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < goodQueries.length; i++){
			testString = "http://www.themountain.com:443/search.php" + goodQueries[i];
			check = true;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		for (int i = 0; i < badQueries.length; i++){
			testString = "http://www.themountain.com:443/search.php" + badQueries[i];
			check = false;
			isUrlValid = urlVal.isValid(testString);
			System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
		}
		
		
    }
}
ge&tree=maple", "?search=123&search1=345&search4=456"};
    	String badQueries[] = {"%skladfjalskej", "*&@#($(*&#($*&#$*(98jkdsghf*()!@#&\\banana??????kli(@*@#KLJ$@QLKJlkjf0ff!()#*)@*#(treetrue"};
   	 
   	 String testString = "";
   	 
   	 
   	 //https://www.themountain.com:443/search.php?search_query=unicorn&section=product
   	 //these schemes should fail
   	 
   	 for (int i = 0; i < goodSchemes.length; i++){
   		 testString = goodSchemes[i] + "www.themountain.com:443/search.php";
   		 check = true;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < badSchemes.length; i++){
   		 testString = badSchemes[i] + "www.themountain.com:443/search.php";
   		 check = false;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < goodHosts.length; i++){
   		 testString = "http://" + goodHosts[i] + ":443/search.php";
   		 check = true;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < badHosts.length; i++){
   		 testString = "http://" + badHosts[i] + ":443/search.php";
   		 check = false;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < goodPorts.length; i++){
   		 testString = "http://www.themountain.com" + goodPorts[i] + "/search.php";
   		 check = true;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < badPorts.length; i++){
   		 testString = "http://www.themountain.com" + badPorts[i] + "/search.php";
   		 check = false;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < goodPaths.length; i++){
   		 testString = "http://www.themountain.com:443" + goodPaths[i];
   		 check = true;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < badPaths.length; i++){
   		 testString = "http://www.themountain.com:443" + badPaths[i];
   		 check = false;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < goodQueries.length; i++){
   		 testString = "http://www.themountain.com:443/search.php" + goodQueries[i];
   		 check = true;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 for (int i = 0; i < badQueries.length; i++){
   		 testString = "http://www.themountain.com:443/search.php" + badQueries[i];
   		 check = false;
   		 isUrlValid = urlVal.isValid(testString);
   		 System.out.println(testString + ' ' + check + ' ' + ' ' + isUrlValid);
   	 }
   	 
   	 
	}
}































 Testing in URLValidatorTest
public void testIsValid()
   {
	   
	   String testString = "";
	   //StringBuilder finalString = new StringBuilder();
	   Random rand = new Random();
	   int rand1, rand2, rand3, rand4, falseCount = 0;
	   
	   // Used 300 as it should show some flags that there are invalid URLS
	   for(int i = 0;i<10000;i++)
	   {
		   rand1 = rand.nextInt(300);
		   String x = String.valueOf(rand1);
		   rand2 = rand.nextInt(300);
		   String y = String.valueOf(rand2);
		   rand3 = rand.nextInt(300);
		   String z = String.valueOf(rand3);
		   rand4 = rand.nextInt(300);
		   String p = String.valueOf(rand4);
		   
		   // concat it all together - I am sure there is a better method
		   testString = testString.concat("http://");
		   testString = testString.concat(x);
		   testString = testString.concat(".");
		   testString = testString.concat(y);
		   testString = testString.concat(".");
		   testString = testString.concat(z);
		   testString = testString.concat(".");
		   testString = testString.concat(p);
	
		   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
		   System.out.println(urlVal.isValid(testString));
		   if (urlVal.isValid(testString) == false){
			   falseCount++;
		   }
		   
		   
		   System.out.println(testString);
		   testString = ""; // reset the string
		   
	   }
	   // Outpputs the amount of false flags.
	   System.out.println(falseCount);
	   
   }
   
   
   // Tests the port numbers
   public void testAnyOtherUnitTest()
   {
	   String testString = "http://www.google.com:";
	   for (int i = 0; i < 10000; i++){
		   String x = String.valueOf(i);
		   testString = testString.concat(x);
		   UrlValidator urlVal = new UrlValidator(null, null, UrlValidator.ALLOW_ALL_SCHEMES);
		   System.out.println(urlVal.isValid(testString));	
		   testString = "http://www.google.com:";
	   }	   	   
	   }
   }
