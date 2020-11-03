// HTML web page to handle Config Data
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html><head>
  <style>html { font-family: Helvetica; display: inline-block; margin: 5px auto; text-align: center;}
    .button { background-color: #009933; border: none; color: white; padding: 5px 5px;
    text-decoration: none; font-size: 30px; margin: 5px; cursor: pointer;}
    .container {padding: 5px; text-align: left;}
    form {border: 10px solid #0000ff; text-align: center;}
    input[type=text].one, input[type=password] { width: 30%; padding: 12px 20px; margin: 20px 0;
    border: 1px solid #ccc; box-sizing: border-box;}
    input[type=text].two{ width: 20%; padding: 12px 20px; margin: 20px 0;
    border: 1px solid #ccc; box-sizing: border-box;}
    .small{width: 100%; padding: 1px 20px;}
  </style>
    </style>
  <script type="text/javascript">
    window.onload = function() {
      document.getElementById('ifYes').style.display = 'none';
      document.getElementById('ifNo').style.display = 'none';
    }
    function yesnoCheck() {
      if (document.getElementById('yesCheck').checked) {
          document.getElementById('ifYes').style.display = 'block';
          document.getElementById('ifNo').style.display = 'none';
      } 
      else if(document.getElementById('noCheck').checked) {
          document.getElementById('ifNo').style.display = 'block';
          document.getElementById('ifYes').style.display = 'none';
      }
    }
    function myFunction() {
      alert("save successful");
    }
</script>
  <title>Setup Modbus TCP</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  </head><body>
    <h1>Config Data Modbus TCP/IP</h1>
    <div class = "container">
      <form action="/post">
        <!--p style="margin-right: 500px;">Learn for free</p-->
        Token Blynk : &nbsp &nbsp<input type="text" class="one" name="token" placeholder="Please enter Token">
      <br><p></p>
      <input type="radio" onclick="javascript:yesnoCheck();" name="yesno" id="yesCheck" value="yes"/>
      New server blynk
      <input type="radio" onclick="javascript:yesnoCheck();" name="yesno" id="noCheck" value="no"/>
      No server blynk
      <p>
      <div id="ifYes">
        Server Blynk:  &nbsp &nbsp<input id="server" class="two" type="text" name="serve" placeholder="Please enter Server">
        <p>
        <a style="margin-right: 65px;"></a> Port: &nbsp &nbsp<input id="port" class="two" type="text" name="port" placeholder="Please enter Port">
        <br><p></p>
      </div>
      <div id="ifNo">
        <br>
        <label>You do not use server!</label>
      </div>
      <br><p></p>
      <tbody>
      <tr>
        <td>IP address slave device : </td>
        <td>
          <input type="text" maxlength="3" minlength="1" name="ipA" style="width: 45px; padding: 2px"> 
        </td>
        <td>.</td>
        <td>
          <input type="text" maxlength="3" minlength="1" name="ipB" style="width: 45px; padding: 2px"> 
        </td>
        <td>.</td>
        <td>
          <input type="text" maxlength="3" minlength="1" name="ipC" style="width: 45px; padding: 2px"> 
        </td>
        <td>.</td>
        <td>
          <input type="text" maxlength="3" minlength="1" name="ipD" style="width: 45px; padding: 2px"> 
        </td>
      </tr>
    </tbody>
    <p></p>
      <a style="margin-right: 65px;"></a>SSID: &nbsp &nbsp<input id="namessid" class="one" type="text" name="namessid" placeholder="Please enter SSID">
      <br><p></p>
       <a style="margin-right: 35px;"></a>Password: &nbsp &nbsp<input id="pass" class="one" type="password" name="pass" placeholder="Please enter Password">
      <p><input type="Submit" value="Submit" onclick="myFunction()" class="button"></p>
    </form>
  </div>
</body></html>)rawliteral";
