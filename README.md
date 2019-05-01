# SmartBin-SSB
<li>This is a Project for computer programming 06016315</li>
<li>โปรเจคนี้ เป็นส่วนหนึ่งของรายวิชา คอมพิวเตอร์โปรแกรมมิ่ง 06016315</li>

## Abstract
&emsp;ปัจจุบันผู้คนส่วนใหญ่ต้องการความสะดวกสบายในการใช้ชีวิตกันเป็นอย่างมาก  โครงงานนี้จึงถูกพัฒนาขึ้นเพื่ออำนวยความสะดวกให้กับผู้ใช้งาน มีระบบเซ็นเซอร์ตรวจวัดระยะเมื่อยื่นขยะออกไปเพื่อจะทิ้ง หากอยู่ในระยะที่ระบบตรวจจับได้ฝาของถังขยะจะเปิดขึ้นอัตโนมัติ  ทำให้ถังขยะธรรมดาๆเปลี่ยนเป็นถังอัจฉริยะที่สามารถ 
เปิด-ปิดได้ด้วยตัวของมันเอง ทำให้ผู้ใช้งานหมดปัญหาที่จะก้มไปเปิดฝาถังขยะ อีกทั้งถังขยะใบนี้ยังมีระบบแจ้งเตือนผ่านแอพพลิเคชันไลน์เมื่อจำนวนขยะในถังมีมากพอที่จะต้องนำไปทิ้ง


<h2><a id="user-content-required-components" class="anchor" aria-hidden="true" href="#required-components"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a><a target="_blank" rel="noopener noreferrer" href=""><img src="" alt="" style="max-width:100%;"></a>Required Components</h2>
<table>
<thead>
<tr>
<th align="center">Servo Motor Arduino SG90 motor Servo ขนาดเล็ก</th>
<th align="center">Arduino Uno R3+USB Arduino Uno</th>
<th align="center">Ultrasonic SR04 เซนเซอร์ UltrasonicModule HC-SR04 Distance Measuring Transducer Sensor</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"><a align="center" href=""><img src="" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center" href=""><img src="" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center" href=""><img src="" width="200px" style="max-width:100%;"></a></td>
</tr>
</tbody>
</table>
<table>
<thead>
<tr>
<th align="center">ESP8266 NodeMCU</th>
<th align="center">Jumper Wire(Male to Female)</th>
<th align="center">ขั้วถ่าน 9V รางถ่าน 9V"</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"><a align="center" href=""><img src="" width="100px" style="max-width:100%;"></a></td>
<td align="center"><a align="center" href=""><img src="" width="200px" style="max-width:100%;"></a></td>
<td align="center"><a align="center" href=""><img src="" width="200px" style="max-width:100%;"></a></td>
</tr>
</tbody>
</table>

<h2><a id="user-content-library-in-use" class="anchor" aria-hidden="true" href="#library-in-use"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a><a target="_blank" rel="noopener noreferrer" href=""><img src="" alt="" style="max-width:100%;"></a>Library in Use</h2>
<ul>
<li>Servo.h</li>
<li>ESP8266WiFi.h</li>
</ul>
## Group Members
<h1><a id="user-content-members" class="anchor" aria-hidden="true" href="#members"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Members</h1>
<table>
<thead>
<tr>
<th align="center"></th>
<th>Name<br><br>ชื่อ</th>
<th>Surname<br><br>นามสกุล</th>
<th>GitHub Username</th>
<th>Student ID number<br><br>รหัสนักศึกษา</th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"><a target="_blank" rel="noopener noreferrer" href=""><img src="" width=""  height="" style="max-width:100%;"></a></td>
<td>Terawat</td>
<td>Kanjanapanwong</td>
<td><a href="https://github.com/Chokcolate">@Chokcolate</a></td>
<td align="center">61070093</td>
</tr>
<tr>
<td align="center"><a target="_blank" rel="noopener noreferrer" href=""><img src="" width=""  height="" style="max-width:100%;"></a></td>
<td>Nitichai </td>
<td>Kodchatean</td>
<td><a href="https://github.com/th4it4y">@th4it4y</a></td>
<td align="center">61070104</td>
</tr>
<tr> 
<td align="center"><a target="_blank" rel="noopener noreferrer" href=""><img src="" alt="" width=""  height="" style="max-width:100%;"></a></td>
<td>Pakaporn</td>
<td>Rattanasethyuth</td>
<td><a href="https://github.com/yykpkp">@yykpkp</a></td>
<td align="center">61070154</td>
</tr>
<tr>
<td align="center"><a target="_blank" rel="noopener noreferrer" href=""><img src="" width=""  height="" style="max-width:100%;"></a></td>
<td>Supakorn</td>
<td>Auttamee</td>
<td><a href="https://github.com/Nnut44">@Nnut44</a></td>
<td align="center">61070228</td>
</tr>
</tbody>
</table>

<h1><a id="user-content-special-thanks" class="anchor" aria-hidden="true" href="#special-thanks"><svg class="octicon octicon-link" viewBox="0 0 16 16" version="1.1" width="16" height="16" aria-hidden="true"><path fill-rule="evenodd" d="M4 9h1v1H4c-1.5 0-3-1.69-3-3.5S2.55 3 4 3h4c1.45 0 3 1.69 3 3.5 0 1.41-.91 2.72-2 3.25V8.59c.58-.45 1-1.27 1-2.09C10 5.22 8.98 4 8 4H4c-.98 0-2 1.22-2 2.5S3 9 4 9zm9-3h-1v1h1c1 0 2 1.22 2 2.5S13.98 12 13 12H9c-.98 0-2-1.22-2-2.5 0-.83.42-1.64 1-2.09V6.25c-1.09.53-2 1.84-2 3.25C6 11.31 7.55 13 9 13h4c1.45 0 3-1.69 3-3.5S14.5 6 13 6z"></path></svg></a>Special Thanks</h1>

<table>
<thead>
<tr>
<th align="center" href=""><img src="" alt="" style="max-width:100%;"></a></th>
<th align="center" href=""><img src="" alt="" style="max-width:100%;"></a></th>
</tr>
</thead>
<tbody>
<tr>
<td align="center"> Asst Profressor Kitsuchart Pasupa<br>ผศ. ดร. กิติ์สุชาต พสุภา</td>
<td align="center"> Asst Profressor Panwit Tuwanut<br>ผศ. ดร. ปานวิทย์ ธุวะนุติ</td>
</tr>
</tbody>
</table>

