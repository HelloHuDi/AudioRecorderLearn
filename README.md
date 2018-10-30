<p align="center">
	<img width="72" height="72" src="art/ic_launcher-web.png"/>
</p>
<h3 align="center">AudioCapture</h3>
<p align="center">
<a href="" target="_blank"><img src="https://img.shields.io/badge/release-v2.1.1-blue.svg"></img></a>
</p>

## screenshots:

<img src="art/capture-gif.gif" width="280px" height="500px"/> 

## dependencies :

```
implementation 'com.hd:audiocapture:2.1.1'
```

## code :

### audio capture

```
Capture capture = AudioCapture.withDefault().getCapture();

//start 
capture.startCapture();

//pause 
capture.pauseCapture();

//resume 
capture.resumeCapture();

//stop 
capture.stopCapture();

//play audio 
capture.play();
```


### License

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
