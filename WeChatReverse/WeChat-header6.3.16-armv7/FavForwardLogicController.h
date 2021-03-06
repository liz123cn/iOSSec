//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class CMessageWrap, CaptureVideoInfo, MMLoadingView, NSData, NSMutableArray, NSString;

@interface FavForwardLogicController : MMObject <SessionSelectControllerDelegate, UIAlertViewDelegate>
{
    NSMutableArray *m_arrFavItemNormal;
    CMessageWrap *m_messageWrap;
    NSString *m_nsToUser;
    NSData *m_fileData;
    CaptureVideoInfo *m_videoInfo;
    MMLoadingView *m_loadingView;
    id <FavForwardLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)ForwardFavItem:(id)arg1;
- (void)ForwardFavItem:(id)arg1 ToUser:(id)arg2;
- (void)ForwardFavItemList:(id)arg1;
- (void)ForwardFavItemList:(id)arg1 ToUser:(id)arg2;
- (void)ForwardNormalItem:(id)arg1;
- (void)ForwardNormalItemList;
- (void)InternalForward;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)PresentSessionSelectCtroller;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)forwardFileMessage:(id)arg1 FileData:(id)arg2 From:(id)arg3;
- (void)forwardMessage:(id)arg1 From:(id)arg2;
- (void)forwardMessage:(id)arg1 fileData:(id)arg2 videoInfo:(id)arg3;
- (void)forwardSightMessage:(id)arg1 From:(id)arg2;
- (void)forwardVideoMessage:(id)arg1 From:(id)arg2;
- (id)init;
@property(nonatomic) __weak id <FavForwardLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CMessageWrap *m_messageWrap; // @synthesize m_messageWrap;
- (void)showTips;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

