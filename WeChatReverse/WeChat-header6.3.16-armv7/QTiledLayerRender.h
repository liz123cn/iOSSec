//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "QDataSourceStandardDelegate.h"

@class NSString;

@interface QTiledLayerRender : UIView <QDataSourceStandardDelegate>
{
    BOOL _useSnapshotRenderer;
    BOOL _snapshotRenderering;
    id <QDataSourceProtocol> _dataSource;
    struct CGContext *_snapshotContext;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) id <QDataSourceProtocol> dataSource; // @synthesize dataSource=_dataSource;
- (void)dataSourceStandard:(id)arg1 didChangeVersion:(id)arg2 fromOldVersion:(id)arg3;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property struct CGContext *snapshotContext; // @synthesize snapshotContext=_snapshotContext;
@property BOOL snapshotRenderering; // @synthesize snapshotRenderering=_snapshotRenderering;
@property BOOL useSnapshotRenderer; // @synthesize useSnapshotRenderer=_useSnapshotRenderer;
- (void)setupSelf;
- (id)tiledLayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

