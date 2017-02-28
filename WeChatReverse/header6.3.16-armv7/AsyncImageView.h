//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IHttpCacheExt.h"

@class NSMutableData, NSString, NSURLConnection, UIActivityIndicatorView, UIImageView;

@interface AsyncImageView : MMUIView <IHttpCacheExt>
{
    NSURLConnection *connection;
    NSMutableData *m_data;
    UIActivityIndicatorView *activityIndicator;
    UIImageView *imageView;
    int m_contentMode;
    id <AsyncImageViewDelegate> _delegate;
    NSString *m_nsNotifyKey;
}

- (void).cxx_destruct;
- (void)OnHttpGetFinish:(id)arg1 response:(id)arg2 ErrNo:(int)arg3 isWebp:(BOOL)arg4;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <AsyncImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)image;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadImageFromHttpCacheMgr:(id)arg1 Type:(unsigned long)arg2;
- (void)loadImageFromURL:(id)arg1;
@property(nonatomic) int m_contentMode; // @synthesize m_contentMode;
@property(retain, nonatomic) NSString *m_nsNotifyKey; // @synthesize m_nsNotifyKey;
- (void)setFrame:(struct CGRect)arg1;
- (void)stopActivityIndicator;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

