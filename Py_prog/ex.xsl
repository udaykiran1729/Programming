
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/student">

<html>
    <head>
        <title>anni neeney</title>

        <style>
            table,tr,td,th{
                text-transform:uppercase;
                text-align:center;
                padding:12px;
                border:2px solid black;
                border-collapse:collapse;
            }
        </style>
    </head>

    <body>
        <h1>table</h1>
        <table>
            <tr>
                <th>name</th>
                <th>regno</th>
            </tr>
            <xsl:for-each select="s1">
                <tr>
                    
                    <td>  <xsl:value-of select="name"></xsl:value-of>  </td>
                    <td> <xsl:value-of select="reg"></xsl:value-of> </td>
                    
                </tr>
            </xsl:for-each>
        </table>
    </body>
</html>

</xsl:template>
</xsl:stylesheet>



<!-- <xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/student">
    
    <html>
        <head><title>measme</title>
            <style>
                table,tr,th,td{

                    border-collapse: collapse;
                    padding: 10px;
                    border: 3px solid black;
                }
            </style>
        </head>
        <body>
            <h1>table</h1>
            <table>
                <tr>
                    <th>name</th>
                    <th>reg.no</th>
                    <th>age</th>
                </tr>
                <xsl:for-each select="s1">
                    <tr>
                        <td>  <xsl:value-of select="name"></xsl:value-of>  </td>
                        <td> <xsl:value-of select="regno"></xsl:value-of> </td>
                        <td>  <xsl:value-of select="age"></xsl:value-of>  </td>
                    </tr>
                </xsl:for-each>
            </table>
        </body>
    </html>

</xsl:template>
</xsl:stylesheet> -->