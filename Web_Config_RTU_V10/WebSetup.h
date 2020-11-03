// HTML web page to handle Config Data
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML>
<html style="height: auto; overflow-y: auto;"><head>
  <meta name="viewport" content="width=device-width,height=device-height,initial-scale=1,maximum-scale=1,minimum-scale=1,user-scalable=no">
  <style>html { font-family: Helvetica; display: inline-block; margin: 5px auto; text-align: center;}
    .button { background-color: #009933; border: none; color: white; padding: 5px 5px;
    text-decoration: none; font-size: 30px; margin: 5px; cursor: pointer;}
    .container {padding: 5px; text-align: center;}
    form {border: 10px solid #0099ff; text-align: center;}
    input[type=text].one, input[type=password] { width: 30%; padding: 12px 20px; margin: 20px 0;
    border: 1px solid #ccc; box-sizing: border-box;}
    input[type=text].two{ width: 20%; padding: 12px 5px; margin: 20px 0;
    border: 1px solid #ccc; box-sizing: border-box;}
    input[type=number].three{ width: 100px; padding: 7px 5px;
    border: 1px solid #ccc; box-sizing: border-box;}
    .small{width: 100%; padding: 1px 20px;}
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
  <title>Setup Modbus RTU</title>
  </head><body style="height: auto; overflow-y: auto;">
    <h1>Config Data Modbus RTU</h1>
    <div class = "container">
      <form action="/post">
        <!--p style="margin-right: 500px;">Learn for free</p-->
        Token Blynk : &nbsp &nbsp<input type="text" class="one" name="token" placeholder="Please enter Token">
      <br><p></p>
      <input type="radio" onclick="javascript:yesnoCheck();" name="yesno" id="yesCheck" value="yes"/>
      New server blynk
      <input type="radio" onclick="javascript:yesnoCheck();" name="yesno" id="noCheck" value="no"/>
      No server blynk
      <div id="ifYes">
        Server Blynk:  &nbsp &nbsp<input id="server" class="two" type="text" name="serve" placeholder="Please enter Server">
        <p><br>
        <a style="margin-right: 65px;"></a> Port: &nbsp &nbsp<input id="port" class="two" type="text" name="port" placeholder="Please enter Port">
        <br><p></p>
      </div>
      <div id="ifNo">
        <br>
        <label>You do not use server!</label>
      </div>
      <br><p></p>
      <a style="margin-right: 65px;"></a>SSID: &nbsp &nbsp<input id="namessid" class="one" type="text" name="namessid" placeholder="Please enter SSID">
      <br><p></p>
       <a style="margin-right: 35px;"></a>Password: &nbsp &nbsp<input id="pass" class="one" type="password" name="pass" placeholder="Please enter Password">
      <p>
        <div style="border: 5px solid #ff9999; text-align: center; width: 40%; margin-left: 30%"><p>
         Modbus RTU Sensor H/T : <p>
          ID device 1 : &nbsp &nbsp<input class="three" id="IdSensor1" type="number" name="IdSensor1" max="255" min="1"><p>
          ID device 2 : &nbsp &nbsp<input class="three" id="IdSensor2" type="number" name="IdSensor2" max="255" min="1"><p>
          ID device 3 : &nbsp &nbsp<input class="three" id="IdSensor3" type="number" name="IdSensor3" max="255" min="1"><p>
          ID device 4 : &nbsp &nbsp<input class="three" id="IdSensor4" type="number" name="IdSensor4" max="255" min="1"><p>
          ID device 5 : &nbsp &nbsp<input class="three" id="IdSensor5" type="number" name="IdSensor5" max="255" min="1"><p>
          ID device 6 : &nbsp &nbsp<input class="three" id="IdSensor6" type="number" name="IdSensor6" max="255" min="1"><p>
       </div>
       <p><br>
       <div style="border: 5px solid #ff9999; text-align: center; width: 40%; margin-left: 30%"><p>
         Modbus RTU Relay 4 : <p>
          ID device 1 : &nbsp &nbsp<input class="three" id="IdRelayF1" type="number" name="IdRelayF1" max="255" min="1"><p>
          ID device 2 : &nbsp &nbsp<input class="three" id="IdRelayF2" type="number" name="IdRelayF2" max="255" min="1"><p>
          ID device 3 : &nbsp &nbsp<input class="three" id="IdRelayF3" type="number" name="IdRelayF3" max="255" min="1"><p>
          ID device 4 : &nbsp &nbsp<input class="three" id="IdRelayF4" type="number" name="IdRelayF4" max="255" min="1"><p>
          ID device 5 : &nbsp &nbsp<input class="three" id="IdRelayF5" type="number" name="IdRelayF5" max="255" min="1"><p>
          ID device 6 : &nbsp &nbsp<input class="three" id="IdRelayF6" type="number" name="IdRelayF6" max="255" min="1"><p>
       </div>
       <p><br>
       <div style="border: 5px solid #ff9999; text-align: center; width: 40%; margin-left: 30%"><p>
         Modbus RTU Relay 8 : <p>
          ID device 1 : &nbsp &nbsp<input class="three" id="IdRelayE1" type="number" name="IdRelayE1" max="255" min="1"><p>
          ID device 2 : &nbsp &nbsp<input class="three" id="IdRelayE2" type="number" name="IdRelayE2" max="255" min="1"><p>
          ID device 3 : &nbsp &nbsp<input class="three" id="IdRelayE3" type="number" name="IdRelayE3" max="255" min="1"><p>
          ID device 4 : &nbsp &nbsp<input class="three" id="IdRelayE4" type="number" name="IdRelayE4" max="255" min="1"><p>
          ID device 5 : &nbsp &nbsp<input class="three" id="IdRelayE5" type="number" name="IdRelayE5" max="255" min="1"><p>
          ID device 6 : &nbsp &nbsp<input class="three" id="IdRelayE6" type="number" name="IdRelayE6" max="255" min="1"><p>
       </div>
      <p><input type="Submit" value="Submit" onclick="myFunction()" class="button"></p>
    </form>
  </div>
</body></html>
)rawliteral";
