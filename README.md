<!DOCTYPE html>
<html>
<head>
  <title>wm8731 Device</title>
</head>
<body>
<div class="content">
<h1>wm8731 Device</h1>
<ul>
  <li> Generated with <a href="https://github.com/uprev-mrt/mrtutils/wiki/mrt-device">MrT Device Utility</a> </li>
  <li> Bus:  I2C</li>
  <li>Datasheet: <a href="https://statics.cirrus.com/pubs/proDatasheet/WM8731_v4.9.pdf">https://statics.cirrus.c...</a> </li>
  <li> DigiKey: <a href="https://www.digikey.com/products/en?KeyWords=WM8731CSEFL-ND">WM8731CSEFL-ND</a></li>
  <li> I2C Address: 0x00</li>
</ul>
<hr/>
<h2>Description: </h2>
<p>Aduio codec</p>

<br/>


<hr class="section">
<h2 class="right"> Register Map</h2>
<hr class="thick">

<table class="fields">
    <tr>
        <th>Name</th>
        <th>Address</th>
        <th>Type</th>
        <th>Access</th>
        <th>Default</th>
        <th>Description</th>
    </tr>
    <tr>
        <td><a href="#register_left_in_detail">LEFT_IN</a></td>
        <td>0x00</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x0097</td>
        <td>Left line in control</td>
    </tr>
    <tr>
        <td><a href="#register_right_in_detail">RIGHT_IN</a></td>
        <td>0x01</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x0097</td>
        <td>Right line in control</td>
    </tr>
    <tr>
        <td><a href="#register_left_out_detail">LEFT_OUT</a></td>
        <td>0x02</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x0079</td>
        <td>Left Headphone Out control</td>
    </tr>
    <tr>
        <td><a href="#register_right_out_detail">RIGHT_OUT</a></td>
        <td>0x03</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x0079</td>
        <td>Right Headphone Out control</td>
    </tr>
    <tr>
        <td><a href="#register_an_path_detail">AN_PATH</a></td>
        <td>0x04</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x000A</td>
        <td>Analogue audio path control</td>
    </tr>
    <tr>
        <td><a href="#register_dig_path_detail">DIG_PATH</a></td>
        <td>0x05</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x0008</td>
        <td>Digital audio path control</td>
    </tr>
    <tr>
        <td><a href="#register_power_dwn_detail">POWER_DWN</a></td>
        <td>0x06</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x009F</td>
        <td>Power Down control</td>
    </tr>
    <tr>
        <td><a href="#register_dig_iface_detail">DIG_IFACE</a></td>
        <td>0x07</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x009F</td>
        <td>Digital audio interface format</td>
    </tr>
    <tr>
        <td><a href="#register_sample_detail">SAMPLE</a></td>
        <td>0x08</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Sampling control</td>
    </tr>
    <tr>
        <td><a href="#register_active_detail">ACTIVE</a></td>
        <td>0x09</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0x0000</td>
        <td>Active Control</td>
    </tr>
    <tr>
        <td><a href="#register_reset_detail">RESET</a></td>
        <td>0x0F</td>
        <td>uint16_t</td>
        <td>RW</td>
        <td>0xFFFF</td>
        <td>Reset control</td>
    </tr>

</table>



<hr class="section">
<h2 class="right"> Registers</h2>
<hr class="thick">



<div id="register_left_in_detail" class="packet">
<h2>LEFT_IN </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x00]</b></li>
    <li class="note">  Default: <b>[0x0097]</b></li>
</ul>

<p>Left line in control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>
<div id="register_right_in_detail" class="packet">
<h2>RIGHT_IN </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x01]</b></li>
    <li class="note">  Default: <b>[0x0097]</b></li>
</ul>

<p>Right line in control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>
<div id="register_left_out_detail" class="packet">
<h2>LEFT_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x02]</b></li>
    <li class="note">  Default: <b>[0x0079]</b></li>
</ul>

<p>Left Headphone Out control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
   </tr>
</table>
<div id="register_right_out_detail" class="packet">
<h2>RIGHT_OUT </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x03]</b></li>
    <li class="note">  Default: <b>[0x0079]</b></li>
</ul>

<p>Right Headphone Out control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
   </tr>
</table>
<div id="register_an_path_detail" class="packet">
<h2>AN_PATH </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x04]</b></li>
    <li class="note">  Default: <b>[0x000A]</b></li>
</ul>

<p>Analogue audio path control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_dig_path_detail" class="packet">
<h2>DIG_PATH </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x05]</b></li>
    <li class="note">  Default: <b>[0x0008]</b></li>
</ul>

<p>Digital audio path control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_power_dwn_detail" class="packet">
<h2>POWER_DWN </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x06]</b></li>
    <li class="note">  Default: <b>[0x009F]</b></li>
</ul>

<p>Power Down control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>
<div id="register_dig_iface_detail" class="packet">
<h2>DIG_IFACE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x07]</b></li>
    <li class="note">  Default: <b>[0x009F]</b></li>
</ul>

<p>Digital audio interface format</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>
<div id="register_sample_detail" class="packet">
<h2>SAMPLE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x08]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Sampling control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_active_detail" class="packet">
<h2>ACTIVE </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x09]</b></li>
    <li class="note">  Default: <b>[0x0000]</b></li>
</ul>

<p>Active Control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
      <td class="zero" >0</td>
   </tr>
</table>
<div id="register_reset_detail" class="packet">
<h2>RESET </h2>
<hr/>
<ul>
    <li class="note">  Address: <b>[0x0F]</b></li>
    <li class="note">  Default: <b>[0xFFFF]</b></li>
</ul>

<p>Reset control</p>


<table class="fields" width="80%">
  <tr>
    <th class="smallCell">bit</th>
    <th> 15</th>
    <th> 14</th>
    <th> 13</th>
    <th> 12</th>
    <th> 11</th>
    <th> 10</th>
    <th> 9</th>
    <th> 8</th>
    <th> 7</th>
    <th> 6</th>
    <th> 5</th>
    <th> 4</th>
    <th> 3</th>
    <th> 2</th>
    <th> 1</th>
    <th> 0</th>
  </tr>
  <tr>
    <th class="smallCell">Field</th>
   
  </tr>
  <tr>
    <th class="smallCell">Default</th>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
      <td class="one" >1</td>
   </tr>
</table>

</div>
</body>
<style>
table.fixed { table-layout:auto; }
table.fixed td { overflow:visible; }

table.fields{
  table-layout:auto;
}

body {
  padding:0;
}

.content{
  padding-top: 0;
  padding-left: 1%;
  padding-right: 1%;
  background-color: #fff;
}

@media print {
  .packet {
    page-break-inside: avoid;
    padding-top: 4px;
  }
  .content{
    width: 100%;
  }
  body{
    background-color: #fff;
  }
}

@media screen {
  .content{
    width: 50%;
    margin-left: auto;
    margin-right: auto;
    margin-top: 0;
    padding-top: 4px;
    box-shadow: 5px 10px #AAA;
  }

  body{
    background-color: #ccc;
    padding: 0;
  }
}

html *{
  font-size: 1em ;
   color: #000 ;
  font-family: Arial ;
}

hr.section {
  border-style: solid;
  border-width: 2px;
  opacity: 1;
}


hr.thick {
  border-style: solid;
  border-width: 1px;
  border-color: #94b2d3;
  opacity: 1;
}

hr {
  opacity: 0.5;
}

table {
  border-collapse: collapse;
}

td {
  border: 1px solid #000000;
  text-align: left;
  padding: 5px;
  vertical-align: top;
}

.smallCell
{
    width: 1px;
    white-space: nowrap;
}

td.zero{
  background-color: #ce927e;
}

td.one{
  background-color: #98cd98;
}

td.empty{
  background-color: #cccccc;
}

td.field{
  width: 1px;
  white-space: nowrap;
  text-align: center;
}

.desc{
  font-size: 1.2em;
}

th {
  border: 1px solid #000000;
  text-align: left;
  padding: 5px;
  background-color: #94b2d3;
}

li.val{
  opacity: 0.6;
}

h1{
  font-size: 2.0em;
}

h2 
{
  font-size: 1.3em;
}

h2.right{
  text-align: center;
  font-size: 1.3em;
}

h3
{
  font-size: 1.8em;
  color: #003366;
}

h4 
{
  font-size: 1.1em;
  color: #003366;
}


.note{
  font-style: italic;
  opacity: 0.6;
}

a{
  text-decoration:none;
}

a:link {
  color: blue;
}

/* visited link */
a:visited {
  color: blue;
}

table.fixed tr td:last-child{
    width:1%;
    white-space:nowrap;
}
</style>
</html>