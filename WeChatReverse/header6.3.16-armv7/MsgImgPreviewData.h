//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CMessageWrap;

@interface MsgImgPreviewData : MMObject
{
    CMessageWrap *_msgWrap;
    struct CGRect _nodeViewWindowFrame;
    BOOL _isNodeViewVisible;
    BOOL _shouldRotateToPortrait;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isNodeViewVisible; // @synthesize isNodeViewVisible=_isNodeViewVisible;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
@property(nonatomic) struct CGRect nodeViewWindowFrame; // @synthesize nodeViewWindowFrame=_nodeViewWindowFrame;
@property(nonatomic) BOOL shouldRotateToPortrait; // @synthesize shouldRotateToPortrait=_shouldRotateToPortrait;

@end

