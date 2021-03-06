/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataInput : AVCaptureInput {
    AVCaptureMetadataInputInternal *_internal;
}

+ (id)metadataInputWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;

- (BOOL)appendTimedMetadataGroup:(id)arg1 error:(id*)arg2;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)init;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 clock:(struct OpaqueCMClock { }*)arg2;
- (id)ports;
- (id)sourceID;

@end
