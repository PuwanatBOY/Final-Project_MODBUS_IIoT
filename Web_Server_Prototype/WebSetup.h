// HTML web page to handle 3 input fields (input1, input2, input3)
const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE HTML><html><head>
  <style>html { font-family: Helvetica; display: inline-block; margin: 5px auto; text-align: center;}
    .button { background-color: #4CAF50; border: none; color: white; padding: 5px 5px;
    text-decoration: none; font-size: 30px; margin: 5px; cursor: pointer;}
    .container {padding: 16px; }
    form {border: 15px solid #f1f1f1; text-align: center;}
  input[type=text], input[type=password] { width: 50%; padding: 12px 20px; margin: 8px 0; display: inline-block;
    border: 1px solid #ccc; box-sizing: border-box;}
  </style>
  <title>Setup</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  </head><body>
    <h1>Config Data</h1>
    <div class = "container" style="text-align: left;">
  <form action="/post">
    Token Blynk: <br><input type="text" name="token">
  <br><p></p>
    SSID: <br><input type="text" name="namessid">
  <br><p></p>
    Password: <br><input type="text" name="pass">
  <p><input type="Submit" value="Submit" class="button"></p>
 </form>
</div>
</body></html>)rawliteral";
