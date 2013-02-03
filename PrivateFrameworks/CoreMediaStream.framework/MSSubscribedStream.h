/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString;

@interface MSSubscribedStream : NSObject <NSCoding> {
    NSString *_ctag;
    NSString *_streamID;
}

@property(retain) NSString * ctag;
@property(retain) NSString * streamID;

+ (id)subscribedStreamWithStreamID:(id)arg1;

- (id)ctag;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamID:(id)arg1;
- (void)setCtag:(id)arg1;
- (void)setStreamID:(id)arg1;
- (id)streamID;

@end