<%@page import="java.util.*"%>

<%
String username=request.Parameter("name");
String password=request.Parameter("pass");
out.print(" name "+username+" password "+password);
%>