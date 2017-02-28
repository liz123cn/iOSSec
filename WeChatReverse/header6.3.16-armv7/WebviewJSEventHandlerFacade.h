//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface WebviewJSEventHandlerFacade : NSObject
{
    NSMutableDictionary *m_functionHandlers;
    NSMutableDictionary *m_functionCallExtraDataMap;
    NSDictionary *m_functionMap;
    id <WebviewJSEventHandlerBaseDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)canHandleJSEvent:(id)arg1;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (id)getExistedHandlerForFunction:(id)arg1;
- (id)getExtraDataForEvent:(id)arg1;
- (void)handleJSEvent:(id)arg1;
- (id)handlerForFunction:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <WebviewJSEventHandlerBaseDelegate> m_delegate; // @synthesize m_delegate;
- (void)setJSFunctionMap:(id)arg1;

@end

