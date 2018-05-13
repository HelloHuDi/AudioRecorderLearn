package com.hd.audiorecorderlearn;

import android.content.Context;

import com.hd.audiocapture.AudioCapture;
import com.hd.audiocapture.Utils;
import com.hd.audiocapture.callback.CaptureCallback;
import com.hd.audiocapture.capture.Capture;

import java.io.File;

/**
 * Created by hd on 2018/5/8 .
 */
public class AudioPresenter {

    public final static int MEDIARECORDER_STYLE = 0;

    public final static int AUDIORECORD_STYLE = 1;

    private Capture capture;

    private Context context;

    private CaptureCallback callback;

    AudioPresenter(Context context, CaptureCallback callback) {
        if (Utils.isPermissionGranted(context) && Utils.isExternalStorageReady()) {
            this.context = context;
            this.callback = callback;
        } else {
            throw new RuntimeException("permission not grant");
        }
    }

    public void initStyle(int style) {
        if (style == MEDIARECORDER_STYLE) {
            capture = AudioCapture.withMediaRecorderToAAC().setCaptureCallback(callback).getCapture();
        } else {
            capture = AudioCapture.withAudioRecordToAAC().setCaptureCallback(callback).getCapture();
        }
    }

    public void start() {
        if (capture != null)
            capture.startCapture(5000);
    }

    public void stop() {
        if (capture != null)
            capture.stopCapture();
    }

    public void play(File file) {
        if (capture != null)
            capture.play(context, file);
    }
}
