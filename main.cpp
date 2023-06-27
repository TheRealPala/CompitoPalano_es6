#include <iostream>
#include "VideoConverter.h"
#include "CompletionObserver.h"
#include "ProgressObserver.h"

int main() {
    VideoConverter vc;
    ProgressObserver po = ProgressObserver(&vc);
    CompletionObserver co = CompletionObserver(&vc);
    Video v1("clip1", "mp4");
    Video v2("clip1", "mp4");
    vc.addVideo(v1, "avi");
    vc.addVideo(v2, "mpeg");
    vc.convert();
}
