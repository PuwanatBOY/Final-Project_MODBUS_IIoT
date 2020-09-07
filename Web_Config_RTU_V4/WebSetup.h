// HTML web page to handle Config Data
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html><head>
  <style>html { font-family: Helvetica; display: inline-block; margin: 5px auto; text-align: center;}
    .button { background-color: #4CAF50; border: none; color: white; padding: 5px 5px;
    text-decoration: none; font-size: 30px; margin: 5px; cursor: pointer;}
    .container {padding: 16px; }
    form {border: 15px solid #f1f1f1; text-align: center;}
  input[type=text], input[type=password] { width: 50%; padding: 12px 20px; margin: 8px 0; display: inline-block;
    border: 1px solid #ccc; box-sizing: border-box;}
    .small{width: 20%; padding: 12px 20px;}
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
</script>
  <title>Setup</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  </head><body>
    <h1>Config Data</h1>
    <div class = "container" style="text-align: left;">
      <form action="/post">
        Token Blynk: <br><input type="text" name="token" placeholder="Please enter Token">
      <br><p></p>
      <input type="radio" onclick="javascript:yesnoCheck();" name="yesno" id="yesCheck" value="yes"/>
      New server blynk
      <input type="radio" onclick="javascript:yesnoCheck();" name="yesno" id="noCheck" value="no"/>
      No server blynk
      <div id="ifYes">
        <br>
        Server Blynk: <br><input id="otherField1" type="text" name="serve" placeholder="Please enter Server">
        <br><p></p>
        Port: <br><input id="otherField2" type="text" name="port" placeholder="Please enter Port">
        <br><p></p>
      </div>
      <div id="ifNo">
        <br>
        <label>You do not use server!</label>
      </div>
      <br><p></p>
      SSID: <br><input id="namessid" type="text" name="namessid" placeholder="Please enter SSID">
      <br><p></p>
      Password: <br><input id="pass" type="text" name="pass" placeholder="Please enter Password">
      <p><input type="Submit" value="Submit" class="button"></p>
    </form>
  </div>
</body></html>)rawliteral";
